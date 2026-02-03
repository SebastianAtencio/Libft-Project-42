/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catencio <catencio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:15:54 by catencio          #+#    #+#             */
/*   Updated: 2026/01/26 16:37:19 by catencio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
/*
int	main (void)
{
	t_list	*lista;
	t_list	*temp;

	lista = NULL;
	ft_lstadd_back(&lista, ft_lstnew("Nodo 1"));
	ft_lstadd_back(&lista, ft_lstnew("Nodo 2"));
	ft_lstadd_back(&lista, ft_lstnew("Nodo 3"));

	temp = lista;
	while (temp)
	{
		printf("- %s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}*/
