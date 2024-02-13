/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:05:27 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:48:21 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if ((*(unsigned char *)s1) != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1 = (unsigned char *)s1 + 1;
		s2 = (unsigned char *)s2 + 1;
	}
	return (0);
}
/*
int main()
{
	char arr1[] = {1, 2, 5};
	char arr2[] = {1, 2, 4};
	int result1 = ft_memcmp(arr1, arr2, sizeof(arr1));

	int a = 123;
	int b = 123;
	int result2 = ft_memcmp(&a, &b, sizeof(int));

	printf("%d\n%d\n", result1, result2);
	return (0);
}*/
