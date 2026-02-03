/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:41:48 by catencio          #+#    #+#             */
/*   Updated: 2026/01/26 17:02:07 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_w(char const *s, char c)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

int	len_word(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**free_all(char **str_arr, int pos)
{
	while (pos >= 0)
	{
		free(str_arr[pos]);
		pos--;
	}
	free(str_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;
	int		len;
	int		pos;

	i = 0;
	pos = 0;
	str_arr = malloc((count_w(s, c) + 1) * sizeof(char *));
	if (!s || !str_arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		len = len_word(&s[i], c);
		str_arr[pos] = ft_substr(s, i, len);
		if (!str_arr[pos])
			return (free_all(str_arr, pos - 1));
		i = i + len;
		pos++;
	}
	str_arr[pos] = NULL;
	return (str_arr);
}
