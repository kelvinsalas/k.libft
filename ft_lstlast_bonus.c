/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:42:02 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/23 11:20:48 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    t_list *head = NULL;
    t_list *node = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));

    node->content = "hashimemashite Daniel Jin desu";
    node->next = NULL;
    node2->content = "buenas tardes";
    node2->next = NULL;
    node = node2;
    head = node;

    char *lastNodeContent = ft_lstlast(head)->content;
    printf("El contenido del último nodo es: %s\n", lastNodeContent);

    free(node);
    return 0;
}*/
