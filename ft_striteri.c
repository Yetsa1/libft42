/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:37:44 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/03 12:43:49 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	print_index_char(unsigned int index, char *c)//imprime cada caracter en forma de indice
{
	printf("Índice: %u, Caracter: %c\n", index, *c);
}

int	main()
{
	char	*str = "Hello, World!";
	
	ft_striteri((char *)str, print_index_char);
	return (0);
}
*/