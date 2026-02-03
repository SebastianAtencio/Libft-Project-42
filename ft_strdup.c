/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:14 by catencio          #+#    #+#             */
/*   Updated: 2026/01/20 13:18:33 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	tot;
	size_t	i;
	char	*tmp;

	i = 0;
	tot = ft_strlen(s) + 1;
	tmp = (char *)malloc(tot);
	if (!tmp)
		return (NULL);
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char cad1[15] = "We got it :D";
	char *cad2;

	cad2 = ft_strdup(cad1);
	printf("%s", cad2);
}*/
