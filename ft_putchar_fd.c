/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:22 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/05 17:24:26 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	ft_putchar_fd('A', 1);//imprime un caracter en el archivo

	int	fd = open("archivo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);//crea y abre un archivo en modo escritura con flags y permisos estandar del sistema
	if (fd != -1)
	{
		ft_putchar_fd('B', fd);
		close(fd);
	}
	else
	{
		printf("Error al abrir el archivo.\n");
	}
	return (0);
}*/