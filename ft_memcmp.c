/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:22:51 by catencio          #+#    #+#             */
/*   Updated: 2026/01/20 13:15:17 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != q[i])
			return (p[i] - q[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char cad1[20] = "Holaaa que pasa";
	char cad2[20] = "HOlaaa qussafaf";
	int	rpta;

	rpta = ft_memcmp(cad1, cad2, 1);
	printf("%d", rpta);
}*/
