/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:38:16 by anuaveti          #+#    #+#             */
/*   Updated: 2023/04/02 12:46:05 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	ft_isnum(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

int	ft_atoi(const char *str)
{
	int				ntmp;
	int				mult;
	int				i;
	unsigned long	n;
	unsigned long	limit;

	n = 0;
	i = 0;
	limit = (unsigned long)(FT_MAX_L / 10);
	mult = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			mult = -1;
	ntmp = ft_isnum(str[i++]);
	while (ntmp != -1)
	{
		if (mult == 1 && (n > limit || (n == limit && ntmp > 7)))
			return (-1);
		else if (mult == -1 && (n > limit || (n == limit && ntmp > 8)))
			return (0);
		n = n * 10 + ntmp;
	}
	return (n * mult);
}
