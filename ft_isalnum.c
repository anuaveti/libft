/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:06:35 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:23:14 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57)))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isalnum('*'));
    printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
}*/
