/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:28:15 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 11:07:38 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *str_new(size_t n)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (!str)
        return (NULL);
    return (str);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    char    *str_ptr;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        len = 0;
    else if (len > (ft_strlen(s) - start))
        len = ft_strlen(s) - start;
    str = str_new(len);
    if (!str)
        return (NULL);
    s += start;
    str_ptr = str;
    *(str + len) = '\0';
    while (len-- && *s)
        *str++ = *s++;
    return (str_ptr);
}
/*
int main()
{
const char *cadena = "Hola, mundoa";
int inicio = 3;
     size_t longitud = 3;

     char *subcadena = ft_substr(cadena, inicio, longitud);
     if (subcadena != NULL) {
         printf("Subcadena: %s\n", subcadena);
         free(subcadena);
     }
     return 0
 }*/
