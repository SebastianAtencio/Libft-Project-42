/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:25:15 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 14:58:34 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;

	i = ft_strlen(s);
	find = (char)c;
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
	char	cad[10] = "Heey";

	ft_strrchr(cad, 'e');
}*/
