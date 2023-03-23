/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:23:38 by anuaveti          #+#    #+#             */
/*   Updated: 2023/01/29 15:14:02 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isascii('*'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('9'));
}*/
