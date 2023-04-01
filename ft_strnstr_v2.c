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
	size_t	n_len;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	n_len = ft_strlen(needle);
	while (haystack[i] && (i + n_len - 1) < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			if (j == n_len - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
