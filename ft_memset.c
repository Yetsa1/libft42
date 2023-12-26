/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:35:30 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 23:11:38 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

int	main()
{
	char	s[12] = "Hola, Mundo";
	unsigned char	*result;

	printf("String original: %s\n", s);
	result = ft_memset(s, 'X', 5);
	printf("String modificada: %s\n", result);

	return (0);
}
