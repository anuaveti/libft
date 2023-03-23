/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:03:45 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:40:47 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;

	sr1 = (unsigned char *)s1;
	sr2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*sr1 != *sr2)
			return (*sr1 - *sr2);
		sr1++;
		sr2++;
		n--;
	}
	return (0);
}
