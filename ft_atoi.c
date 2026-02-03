/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:34:23 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 12:32:37 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		signo;
	long	rpta;

	i = 0;
	signo = 1;
	rpta = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rpta = (rpta * 10) + (str[i] - '0');
		i++;
	}
	return ((int)rpta * signo);
}
/*
int main(int argc, char *argv[])
{
    int c;

    c = ft_atoi(argv[1]);
    printf("Caracter a nro: %d\n", c);
    printf("Nro de argumentos: %d\n", argc);
    return (0);
}*/
