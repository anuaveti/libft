/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:40:28 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:34:27 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)

{
	int		i;
	char	*dst;
	char	*d;

	i = 0;
	d = ((dst = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1)));
	if (!d)
		return (0);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int	main()
{
	char	*src = "Hello";
	char	*dst;
	printf("%s && %p source\n", src, src);
	dst = strdup(src);
	printf("%s && %p dst by strdup\n", dst, dst);
	dst = ft_strdup(src);
	printf("%s && %p dst by ft_strdup\n", dst, dst);
	free(dst);
}*/