/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:17:15 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:27:39 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *ptr, const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
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
