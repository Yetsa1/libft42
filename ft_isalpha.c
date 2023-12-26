/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:28:04 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 22:57:03 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int numero_recibido)
{
	if (numero_recibido >= 'A' && numero_recibido <= 'Z')
		return (1);
	if (numero_recibido >= 'a' && numero_recibido <= 'z')
		return (1);
	return (0);
}

int	main()
{
	char	c = 'A';
	
	if (ft_isalpha (c))
		printf("%c 1 \n", c);
	else
		printf("%c 0 \n", c);

	return (0);
}
