/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:04:54 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:30:12 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	k;

	k = c;
	if (c >= 65 && c <= 90)
		k += 32;
	return (k);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_tolower('Z'));
}*/
