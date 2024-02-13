/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:41:26 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:41:30 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	size_t		total_len;
	const char	*s;

	if ((!dst || !src) && !dstsize)
		return (0);
	s = src;
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dst_len < dstsize)
		total_len = dst_len + ft_strlen(s);
	else
		return (dstsize + strlen(s));
	while (*s && (dst_len + 1) < dstsize)
	{
		*(dst + dst_len) = *s++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}
/*
int main()
{
	char src[] = "buenas";
	char dst[] = "t";

	printf("%zu\n%s",ft_strlcat(dst,src,sizeof(dst)), dst);
	return (0);
}*/
