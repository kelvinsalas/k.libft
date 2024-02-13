/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:17:42 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:42:53 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char )c <= 'z')
		c -= 32;
	return (c);
}
/*
int main()
{
	int a = 'z';
	printf("%c",ft_toupper(a));
	return 0;
}*/
