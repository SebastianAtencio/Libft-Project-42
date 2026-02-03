/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:45:16 by catencio          #+#    #+#             */
/*   Updated: 2026/01/22 13:36:16 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*comp;

	if (!lst)
		return (NULL);
	comp = lst;
	while (comp->next != NULL)
	{
		comp = comp->next;
	}
	return (comp);
}
