/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:56:19 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:56:27 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if (!lst || !f)
		return ;
	i = 0;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main() {
    t_list *lst;
    char *strings[] = {"uno", "dos", "tres", "cuatro"};
    int i;

    // Crear la lista
    lst = NULL;
    for (i = 0; i < sizeof(strings) / sizeof(*strings); i++) {
        ft_lstadd_back(&lst, ft_lstnew((void *)strings[i]));
    }

    // Recorrer la lista e imprimir cada elemento
    ft_lstiter(lst, print_data);

    // Limpiar la lista
    ft_lstclear(&lst, free);

    return 0;
}*/
