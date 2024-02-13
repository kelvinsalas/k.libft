/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:40:36 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:40:45 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int	main()
{
	t_list *lst = NULL;
	t_list *new_node = ft_lstnew("Hello");
	t_list *new_node2 = ft_lstnew("hola");

	if (!new_node)
		return (1);
	if (!new_node2)
		return (1);
	ft_lstadd_front(&lst, new_node);
	ft_lstadd_front(&new_node2, new_node2);
	print_list(lst);
	print_list(lst);
	return (0);
}*/
