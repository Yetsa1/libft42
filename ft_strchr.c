/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:16:21 by yeparra-          #+#    #+#             */
/*   Updated: 2023/09/29 12:01:39 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	const char *str = "Hello, World!";
    char search_char = 'o';

    // Buscando el primer carácter 'o' en la cadena utilizando ft_strchr
    char *result = ft_strchr(str, search_char);

    if (result != NULL) {
        printf("El carácter '%c' fue encontrado en la posición %ld: %s\n", search_char, result - str, result);
    } else {
        printf("El carácter '%c' no fue encontrado en la cadena.\n", search_char);
    }

    return 0;
}*/