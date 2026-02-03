/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:53:32 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 10:13:36 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_str(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		n = n * (-1);
		c++;
	}
	if (n == 0)
		c++;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		tot;
	long	lon;

	lon = n;
	tot = count_str(lon);
	p = malloc(tot + 1);
	if (!p)
		return (NULL);
	p[tot] = '\0';
	if (lon == 0)
		p[0] = '0';
	if (lon < 0)
	{
		p[0] = '-';
		lon = lon * (-1);
	}
	while (lon != 0)
	{
		p[tot -1] = ((lon % 10) + '0');
		lon = lon / 10;
		tot--;
	}
	return (p);
}
/*
int	main(void)
{
	int	num;
	char	*p;

 	num = -48954;
	p = ft_itoa(num);
	printf("%s", p);
}
*/