/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:02:05 by yeparra-          #+#    #+#             */
/*   Updated: 2023/11/27 22:51:30 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j] == '\0' && haystack[i + j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

int	main()
{
	const char *haystack = "Hello, World!";
	const char *needle = "World";
	size_t	len = 13;//longitud sin el carácter nulo
	char	*result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
	{
		printf("la primera aparación de '%s' fue encontrada en la posición %ld: %s\n", needle, result - haystack, result);
	}
	else
	{
		printf("La subcadena '%s' no fue encontrada en los primeros %zu cracteres de la cadena\n", needle, len);
	}
	return (0);
}
