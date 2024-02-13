/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:12:33 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:12:45 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('L', 1);
	ft_putchar_fd('A', 1);

	return (0);

}*/
