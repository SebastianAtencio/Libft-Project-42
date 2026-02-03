/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:41:48 by catencio          #+#    #+#             */
/*   Updated: 2026/01/20 12:10:45 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;
	int				i;

	i = 0;
	p = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == p)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == p)
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	char cad[20] = "Holaaa que tal?";

	ft_strchr(cad, 'q');
}*/
