/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:29:17 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 12:11:51 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	if (n == 0)
		return (0);
	else
	{
		while (cont < (n - 1) && s1[cont] && s2[cont] && s1[cont] == s2[cont])
			cont = cont + 1;
		return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
	}
}
/*
int main(void)
{
	int test1;
	int test2;
	int test3;
	int test4;
	int prueba1;
	int prueba2;
	int prueba3;
	int prueba4;
	char a[] = "HOla";
	char b[] = "HOl";
	char c[] = "HOLA";
	char d[] = "Ho";

	test1 = ft_strncmp(&a[0], &b[0], 4);
	prueba1 = strncmp(a,b,4);
	test2 = ft_strncmp(&a[0], &c[0], 4);
	prueba2 = strncmp(a,c,4);
	test3 = ft_strncmp(&a[0], &d[0], 4);
	prueba3 = strncmp(a,d,4);
	test4 = ft_strncmp(&d[0], &a[0], 1);
	prueba4 = strncmp(d,a,1);
	printf("%d\n", test1);
	printf("%d\n", prueba1);
	printf("%d\n", test2);
	printf("%d\n", prueba2);
	printf("%d\n", test3);
	printf("%d\n", prueba3);
	printf("%d\n", test4);
	printf("%d\n", prueba4);
	return 0;
}*/
