/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:42:41 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/05 16:44:24 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main()
{
	char *str = "mi cadena";
	int	*c = 'a';//variable que busca el último carácter en mi cadena
	char	*result = ft_strrchr(str, c);
	
	if (result != NULL)
		printf("La última aparición de '%c' fue encontrada en la posición %ld\n", c, result - str);
	if (result == NULL)
		printf("No se ha encontrado el carácter '%c' en mi cadena\n", c);

	return 0;
}*/