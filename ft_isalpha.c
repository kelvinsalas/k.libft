/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:20:34 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:14:10 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int main()
{
	char c;
   	scanf("%c ", &c);
	char a;
   	scanf("%c", &a);

	printf("%d\n", ft_isalpha(c));	
	printf("%d\n", ft_isalpha(a));

	return (0);
}*/
