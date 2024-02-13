/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:00:27 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:45:56 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}
/*
int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	int result = ft_strncmp(str1, str2, sizeof(str1));

	char str3[] = "Hellb";
	char str4[] = "Hella";
	int result2 = ft_strncmp(str3, str4, sizeof(str3));

	printf("%d\n%d\n",result, result2);
}*/
