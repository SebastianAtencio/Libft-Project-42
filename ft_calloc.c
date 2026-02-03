/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:04:14 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 12:41:18 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
