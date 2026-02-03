/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:43:28 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 10:52:26 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    char    cadena[] = "Hola cadna no caD caD se caD    cad CAD";
    char    buscar[] = "caD se";
    char    *p;
    char    *t;

    t = ft_strnstr(cadena, buscar, 90);
    p = strnstr(cadena, buscar, 90);
    printf("%s\n", t);
    printf("%s\n", p);
    return 0;
}*/