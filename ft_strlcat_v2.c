/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:32:41 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:44:26 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = ft_strlen(dst);
	j = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize < 1)
		return (slen + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize < dlen)
		return (slen + dstsize);
	else
		return (dlen + slen);
}
