/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:28:11 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/29 18:57:15 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			j = 1;
			while (haystack[i + j] && i + j < len
				&& haystack[i + j] == needle[j])
				++j;
			if (needle[j] == 0)
				return ((char *)(haystack + i));
		}
		++i;
	}
	return (NULL);
}
