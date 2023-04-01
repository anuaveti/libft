/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:53:20 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:47:18 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*tmp;

	tmp = (unsigned char *)malloc(len);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!tmp)
		return (dst);
	i = 0;
	while (i < len)
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(d + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dst);
}
