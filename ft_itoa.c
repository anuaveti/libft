/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:31:31 by anuaveti          #+#    #+#             */
/*   Updated: 2023/04/02 18:56:09 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count(int n)
{
	int				i;
	unsigned int	num;

	if (n >= 0)
	{
		i = 0;
		num = n;
	}
	else
	{
		i = 1;
		num = -n;
	}
	while (num >= 1)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static int	ft_size(int n)
{
	if (n != 0)
		return (char_count(n));
	else
		return (1);
}

static int	ft_num(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	int				size;
	unsigned int	num;

	i = 1;
	size = ft_size(n);
	num = ft_num(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n != 0)
		str[0] = '-';
	else
		str[0] = '0';
	while (num >= 1)
	{
		str[size - i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}
