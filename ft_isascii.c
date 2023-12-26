/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:32:05 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 23:07:08 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
		return (1);
	return (0);
}

int	main()
{
	int	ascii = 42;

	if (ft_isascii(ascii))
	{
		printf("%d 1 \n", ascii);
	}
	else
	{
		printf("%d 0 \n", ascii);
	}
	return (0);
}
