/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:28:15 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/09 10:30:17 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (start > strlen(s))
		len = 0;
	ptr = (char *)malloc((len +1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i > len && s[start] != '\0')
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
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
