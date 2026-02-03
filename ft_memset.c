/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:04:30 by catencio          #+#    #+#             */
/*   Updated: 2026/01/26 15:39:00 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	val;

	i = 0;
	p = (char *)s;
	val = (char)c;
	while (i < n)
	{
		p[i] = val;
		i++;
	}
	return (s);
}

/*
int main()
{
	char cadena[20] = "Hola mundo";
	printf("Antes: %s\n", cadena);
	ft_memset(cadena, 'A', 3);
	printf("Despues %s\n", cadena);
}
	
p = (char *)s; // p = s
*/