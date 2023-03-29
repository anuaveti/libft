/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:25:19 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/29 19:14:46 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n >= 0)
		number = n;
	else
		number = -n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (number < 10)
		ft_putchar_fd(number + '0', fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + '0', fd);
	}
}
