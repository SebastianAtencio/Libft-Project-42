/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:27:47 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 15:01:29 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dest && !src)
		return (dest);
	i = 0;
	d = dest;
	s = src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char	cad[13] = "hola que tal";

	printf("Antes: %s\n", cad);
	ft_memmove(cad+5, cad, 6);	// ft_memmove(&cad[0], &cad[5], 6)
	printf("Despues: %s\n", cad);
}
	
// ((char *)dest)[i] = ((char *)src)[i];
*/
