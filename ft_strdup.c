/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:18:47 by yeparra-          #+#    #+#             */
/*   Updated: 2023/10/10 16:37:54 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		y;
	char	*des;

	x = ft_strlen(s1);
	y = 0;
	des = (char *)malloc(sizeof(char) * (x + 1));
	if (des == NULL)
		return (0);
	while (s1[y] != '\0')
	{
		des[y] = s1[y];
		++y;
	}
	des[y] = '\0';
	return (des);
}
/*
int	main()
{
	const char	*orig = "Hello, World!";
	char	*dup = ft_strdup(orig);//duplico mi cadena original

	if (dup != NULL)
	{
		printf("Cadena original: %s\n", orig);
		printf("Cadena duplicada: %s\n");

		free(orig);
	}
	else
	{
		printf("Error al duplicar la cadena.\n");
	}
	return (0);
}*/