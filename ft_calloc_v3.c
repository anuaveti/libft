/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:29:51 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/29 19:21:25 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*cal;
	size_t	c;

	cal = malloc(count * size);
	if (!cal)
		return (0);
	c = -1;
	while (++c < size * count)
		cal[c] = 0;
	return (cal);
}
