/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:09:52 by anuaveti          #+#    #+#             */
/*   Updated: 2023/01/29 17:50:25 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;
	char	*m;
	int		i;

	k = c;
	m = (char *)s;
	i = 0;
	while (m[i] != k)
	{
		if (m[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)m + i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strchr("hello", 10));
	printf("%s", strchr("hello", 10));
}*/
