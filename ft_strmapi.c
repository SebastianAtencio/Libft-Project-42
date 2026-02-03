/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:20:52 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 11:11:05 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char ft_tolowermod(unsigned int i, char c)
{
    if (i % 2 == 0 && (c >= 'A' && c <= 'Z'))
        c = c + 32;
    return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char const cad1[12] = "HOLAAAA :D";
	char	*cad2;

	cad2 = ft_strmapi(cad1, ft_tolowermod);
	printf("Original: %s\n", cad1);
	printf("Modificado: %s\n", cad2);
	free(cad2);
	return (0);
}*/

// f(i, s[i]) || (*f)(i, s[i])