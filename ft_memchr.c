/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:41:38 by catencio          #+#    #+#             */
/*   Updated: 2026/01/20 13:14:56 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char cad[20] = "Holaa que pasa?";

	ft_memchr(cad, 'q', 10);
}*/
