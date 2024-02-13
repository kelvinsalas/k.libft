/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:16:54 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:16:59 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main()
{
	int c;
	c =  ' ';
	int a = '2';

	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(a));

	return (0);
}*/
