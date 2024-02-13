/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:17:15 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/01/31 09:24:48 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	return (ptr);
}
/*
int main()
{
	char *s1 = "tamaño";
    char *original = strdup(s1);
    char *custom = ft_strdup(s1);

    printf("Original: %s\n", original);
    printf("Custom  : %s\n", custom);

    if (strcmp(original, custom) == 0)
        printf("Both strings are the same\n");
    else
        printf("Strings are different\n");

    free(original);
    free(custom);

    return 0;
}*/
