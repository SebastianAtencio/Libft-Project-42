/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:37:02 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 11:02:00 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}
/*
int	main(void)
{
	char cad[10] = "Holaaaaa";

	printf("%s", cad);
	ft_bzero(cad, 5);
	printf("%s", cad);
}*/
