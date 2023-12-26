/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:52:14 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 23:00:31 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int digito)
{
	if (digito >= 48 && digito <= 57)
		return (1);
	return (0);
}

int	main()
{
	int	digit = '5';

	if (ft_isdigit(digit))
	{
		printf("%c 1 \n", digit);
	}
	else
	{
		printf("%d 0 \n", digit);
	}
	return (0);
}
