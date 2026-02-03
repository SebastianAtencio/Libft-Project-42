/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:56:23 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 10:49:20 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_trim(char c, char const *cad)
{
	size_t	i;
	size_t	rpta;

	i = 0;
	rpta = 0;
	while (cad[i])
	{
		if (cad[i] == c)
		{
			rpta = 1;
			return (rpta);
		}
		i++;
	}
	return (rpta);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	tot;
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	tot = ft_strlen(s1) - 1;
	while (i <= tot && ft_trim(s1[i], set))
		i++;
	while (tot >= i && ft_trim(s1[tot], set))
		tot--;
	new = (char *)malloc(tot - i + 2);
	if (!new)
		return (NULL);
	while (j < (tot - i + 1))
	{
		new[j] = s1[i + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
/*
int	main(void)
{
	char	cad1[15] = "*_-Hola__-";
	char	cad2[15] = "*-";
	char	*cad3;

	cad3 = ft_strtrim (cad1, cad2);
	printf("%s", cad3);
}*/
