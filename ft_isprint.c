/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:34:27 by anuaveti          #+#    #+#             */
/*   Updated: 2023/01/29 15:15:20 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isprint('*'));
	printf("%d\n", ft_isprint('^'));
	printf("%d\n", ft_isprint('#'));
	printf("%d\n", ft_isprint('p'));
	printf("%d\n", ft_isprint(92));
	printf("%d\n", ft_isprint('/'));
}*/
