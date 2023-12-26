/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:56:06 by yeparra-          #+#    #+#             */
/*   Updated: 2023/09/29 12:12:27 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *cs, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	s = cs;
	i = 0;
	while (i < n)
	{
		if (*s == (unsigned char)c)
		{
			return ((void *)s);
		}
		else
		{
			s++;
			i++;
		}
	}
	return (0);
}
/*
int	main()
{
	char	*str = "hola, mundo";
	char	c = 'o';
	size_t	len = 11;//longitud sin contar el carácter nulo
	void	*result = ft_memchr(str, c, len);//busca la primera aparición de c en los primeros 11 bytes de str

	if(result != NULL)
	{
		printf("La primera aparición de '%c' fue encontrada en la posición %ld.\n", c, (char *)result - str);
	}
	else
	{
		printf("El carácter '%c' no ha sido encontrado en los primeros %zu bytes de la cadena.\n", c, len);
	}
	return (0);
}*/