/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:43:40 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:43:49 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void free_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;
    t_list *new_node = malloc(sizeof(t_list));

    new_node->content = strdup("Node to delete");
    new_node->next = NULL;

    head = new_node;

    printf("Before deletion: %s\n", (char *)head->content);

    ft_lstdelone(head, free_content);

    printf("After deletion: %s\n", (char *)head->content);

    return 0;
}*/
