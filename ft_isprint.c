/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:10:58 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 23:07:31 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main()
{
	char	imp = 106;
	int	result = ft_isprint(imp);

	if (result)
		printf("%c Es un carácter imprimible \n", result);
	else
		printf("%c No es un carácter imprimible \n", result);
	return (0);
}
