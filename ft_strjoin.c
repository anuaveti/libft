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

char	*ft_scpy(char *dst, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len1 + len2] = '\0';
	ft_strlcpy(str, s2, len1);
	ft_scpy(str, s2);
	return (str);
}
