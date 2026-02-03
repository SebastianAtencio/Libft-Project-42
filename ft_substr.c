/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:31:13 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 11:05:00 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	st_len;

	i = 0;
	if (!s)
		return (NULL);
	st_len = ft_strlen(s);
	if (start >= st_len)
		return (ft_strdup(""));
	if (len > st_len - start)
		len = st_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	cad1[30] = "Bonjour comment ca va?";
	char	*cad2;

	cad2 = ft_substr(cad1, 5, 8);
	printf("%s", cad2);
}*/
