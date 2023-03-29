/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:31:31 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/29 19:18:05 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count(int n)
{
	int				i;
	unsigned int	num;

	i = n >= 0 ? 0 : 1;
	num = n >= 0 ? n : -n;
	while (num >= 1)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				i;
	char			*str;
	int				size;
	unsigned int	num;

	i = 1;
	size = n != 0 ? char_count(n) : 1;
	num = n >= 0 ? n : -n;
	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	str[0] = n != 0 ? '-' : '0';
	while (num >= 1)
	{
		str[size - i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}
