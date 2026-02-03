/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:08:14 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 10:32:54 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cad1;
	size_t	cad2;
	char	*newcad;

	if (!s1 || !s2)
		return (NULL);
	cad1 = ft_strlen(s1);
	cad2 = ft_strlen(s2);
	newcad = (char *)malloc(cad1 + cad2 + 1);
	if (!newcad)
		return (NULL);
	ft_memcpy(newcad, s1, cad1);
	ft_memcpy(newcad + cad1, s2, cad2);
	newcad[cad1 + cad2] = '\0';
	return (newcad);
}
/*
int	main(void)
{
	char	char1[5] = "Hola";
	char	char2[5] = " :D";
	char	*char3;

	char3 = ft_strjoin(char1, char2);
	printf("%s", char3);
}
*/