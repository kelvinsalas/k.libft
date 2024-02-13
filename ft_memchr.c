/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:02:08 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:46:34 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s++ == (unsigned char)c)
			return ((void *)(unsigned char *)s - 1);
	}
	return (NULL);
}
/*
int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%s\n", memchr(s, '0', 0));
	printf("%s\n", ft_memchr(s, 2, 3));
}*/
