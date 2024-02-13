/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:22:45 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:21:26 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')
		|| (arg >= '0' && arg <= '9'))
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

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(a));

	return (0);
}*/
