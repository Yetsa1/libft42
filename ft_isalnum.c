/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:17:48 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 23:01:03 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int alpha_digit)
{
	if (alpha_digit >= 48 && alpha_digit <= 57)
		return (1);
	if (alpha_digit >= 65 && alpha_digit <= 90)
		return (1);
	if (alpha_digit >= 97 && alpha_digit <= 122)
		return (1);
	return (0);
}

int	main()
{
	char	digito = 'a';

	if (ft_isalnum(digito))
	{
		printf("%c 1 \n", digito);
	}
	else
	{
		printf("%c 0 \n", digito);
	}
	return 0;
}
