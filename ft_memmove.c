/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:53:20 by anuaveti          #+#    #+#             */
/*   Updated: 2023/04/02 18:57:13 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*source;
	unsigned char		*destination;

	if (!dst && !src)
		return (NULL);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if ((source < destination) && (destination < source + len))
	{
		destination += len;
		source += len;
		while (len)
		{
			*(--destination) = *(--source);
			--len;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
