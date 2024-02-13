/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:41:19 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:41:41 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cuenta el numero de nodos de la lista
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     size;
    t_list  *temp;

    if (!lst)
        return (0);
    temp = lst;
    size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    return (size);
}
/*
int main(void)
{
    t_list *l;
    int actual;
    int expected;

    l = ft_lstnew(strdup("1"));
    l->next = ft_lstnew(strdup("2"));
    l->next->next = ft_lstnew(strdup("3"));

    while (l)
    {
        printf("Size of the list: %d\n", ft_lstsize(l));
        l = l->next;
    }
    return 0;
}*/
