/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:42:40 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:20:27 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_finlen(char **strs, int size, int sep_len)
{
	int	i;
	int	fin_len;

	i = 0;
	fin_len = 0;
	while (i < size)
	{
		fin_len += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	fin_len -= sep_len;
	return (fin_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	size;
	int	fin_len;
	char	*str;
	char	*r;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	fin_len = ft_finlen(s1, size, ft_strlen(s2));
	r = ((str = (char *)malloc((fin_len + 1) * sizeof(char))));
	if (!r)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(r, s1[i]);
		r += ft_strlen(s1[i]);
		if (i < size - 1)
		{
			ft_strcpy(r, s2);
			r += ft_strlen(s2);
		}
		i++;
	}
	*r = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	**strs;
	char	*sep;
	char	*res;
	int		size = 4;
	
	strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 11 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 26 + 1);
	strs[3] = (char *)malloc(sizeof(char) * 23 + 1);
	strs[0] = "Hello";
	strs[1] = "beautiful,";
	strs[2] = "I have been waiting for u!";
	strs[3] = "You look lovely today!";
	sep = " ";
	res = ft_strjoin(size, strs, sep);
	printf("%s$\n", res);
	free(res);
}*/
