/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:29:51 by anuaveti          #+#    #+#             */
/*   Updated: 2023/04/02 18:54:22 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	t;
	char	*cal;

	t = count * size;
	if (count == 0 || size == 0)
	{
		cal = malloc(t);
		if (!cal)
			return (0);
		return (cal);
	}
	if (count > SIZE_MAX / size)
		return (0);
	cal = malloc(t);
	if (!cal)
		return (0);
	else
		ft_memset(cal, '\0', t);
	return (cal);
}
