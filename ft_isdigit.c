/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:32:13 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:25:30 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
int main()
{
	int c;
   	scanf("%d", &c);
	int a;
   	scanf("%d", &a);

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(a));

	return (0);
}*/
