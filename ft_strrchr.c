/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:38:49 by anuaveti          #+#    #+#             */
/*   Updated: 2023/01/29 18:51:32 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*m;
	size_t	l;

	m = (char *)s;
	l = ft_strlen(s);
	if (c == '\0')
		return (m + l);
	while (l != 0)
	{
		if (m[l] == (char)c)
			return (m + l);
		l--;
	}
	if (s[0] == (char)c)
		return (m);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strrchr("hello", 108));
	printf("%s", strrchr("hello", 108));
}*/
