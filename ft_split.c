/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:03:33 by anuaveti          #+#    #+#             */
/*   Updated: 2023/03/23 20:08:10 by anuaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *str, char delim)
{
	int	p_delim;
	int	w_count;
	int	i;

	p_delim = 1;
	w_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == delim)
			p_delim = 1;
		else if (p_delim)
			w_count++;
		if (str[i] != delim)
			p_delim = 0;
		i++;
	}
	return (w_count);
}

static int	wordsize(char const *str, char delim, int i)
{
	int	w_size;

	w_size = 0;
	while (str[i] != delim && str[i])
	{
		w_size++;
		i++;
	}
	return (w_size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- >0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		w_count;
	int		w_size;
	char	**strs;

	i = 0;
	j = -1;
	w_count = wordcount(s, c);
	if (!(strs = (char **)malloc((w_count + 1) * sizeof(char *))))
		return (NULL);
	while (++j < w_count)
	{
		while (s[i] == c)
			i++;
		w_size = wordsize(s, c, i);
		if (!(strs[j] = ft_substr(s, i, w_size)))
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += w_size;
	}
	strs[j] = 0;
	return (strs);
}
