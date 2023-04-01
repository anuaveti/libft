/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:42:40 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/29 19:03:37 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc(size);
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str;)
}

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	str = ft_strlcpy(str, s1, ft_strlen(s1));
	str = ft_strlcat(str, s2, ft_strlen(s2));
	return (str);
}
