/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:17:29 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/03 13:19:17 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

int	main()
{
	int	fd = 1;//open(archivo.txt, O_WRONLY, O_CREAT, O_TRUNC, 0644);

	ft_putendl_fd("Hello, World!", fd);
	return (0);
}