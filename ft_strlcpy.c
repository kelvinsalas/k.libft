/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:41:26 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 11:44:16 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (src[i])
        i++;
    if (!dstsize)
        return (i);
    while (--dstsize != 0 && *src)
        *dst++ = *src++;
    *dst = '\0';
    return (i);
}
/*
int main()
{
        int i;
        scanf("%d", &i);

        char src[] = "nice to meeto you";
        char dst[i];
        printf("%zu\n%s", ft_strlcpy(dst, src, sizeof(dst)), dst);

        return (0);
}*/
~
~
~
~
~
~
~
~
