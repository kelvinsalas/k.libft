/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:28:56 by ksalas-o          #+#    #+#             */
/*   Updated: 2024/02/13 12:27:23 by ksalas-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	size_t	i;
	size_t	lng;
	char	*result;

	i = 0;
	lng = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((lng + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		result[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		result[i] = *s2;
		i++;
		s2++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main()
{
	char const *s1 = "hola ";
	char const *s2 = "mundo";
	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}*/
