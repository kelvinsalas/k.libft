/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:09:30 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:11:19 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int main()
{
	char *str = "Hola mundo";
	int	fd = 1;

	ft_putendl_fd(str, fd);
	return (0);
}*/
