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
	size_t	t;
	size_t	i;
	char	*cal;

	t = count * size;
	cal = malloc(t);
	if (cal == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		cal[i] = 0;
		i++;
	}
	return (cal);
}
