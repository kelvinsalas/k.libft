/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:13:58 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:14:08 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(fd, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr_fd(copia / 10, fd);
		ft_putchar_fd((copia % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copia + '0', fd);
}

/*int main()
{
	int	num1 = 12345;
	int	num2 = -6789;

	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-6789, 1);
	write(1, "\n", 1);
	return (0);
}*/
