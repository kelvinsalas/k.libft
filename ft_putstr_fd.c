/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:07:16 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:08:49 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
			write(fd, &s[i++], 1);
}

/*int main()
{
	char	str[] = "Hola mundo";
	ft_putstr_fd(str, 1);
	return (0);
}*/
