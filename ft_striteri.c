/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:47:38 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 11:25:53 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_tolowermod(unsigned int i, char *c)
{
    if (i % 2 == 0 && (*c >= 'A' && *c <= 'Z'))
		*c = *c + 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	tot;

	tot = ft_strlen(s);
	i = 0;
	while (i < tot)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
    char cad1[12] = "HOLAAAA :D";

    ft_striteri(cad1, ft_tolowermod);
    printf("Modificado: %s\n", cad1);
    return (0);
}*/
