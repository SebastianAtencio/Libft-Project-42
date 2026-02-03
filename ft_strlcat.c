/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:57:30 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 10:12:45 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	if (size <= d)
		return (size + s);
	if (size > (d + s))
		ft_memcpy(dst + d, src, s + 1);
	else
	{
		ft_memcpy(dst + d, src, size - d - 1);
		dst[size - 1] = '\0';
	}
	return (d + s);
}
