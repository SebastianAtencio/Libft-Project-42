/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:30:13 by catencio          #+#    #+#             */
/*   Updated: 2026/01/23 17:11:22 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lis2;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	lis2 = NULL;
	while (lst)
	{
		new_content = f(lst -> content);
		tmp = ft_lstnew(new_content);
		if (!tmp)
		{
			del(new_content);
			ft_lstclear(&lis2, del);
			return (NULL);
		}
		ft_lstadd_back(&lis2, tmp);
		lst = lst->next;
	}
	return (lis2);
}
