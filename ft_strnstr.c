/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:28:11 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:21:38 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] && i + j < len
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char*)haystack + i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char a[] = "Hello, World";
	char b[] = "orl";
	printf("%s", ft_strnstr(a, b));
}*/
