/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42_function_strlcpy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:49:47 by roweber           #+#    #+#             */
/*   Updated: 2021/09/30 14:40:15 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

int	main(void)
{
	char	*c1 = "source";
	char	c2[] = "destination";
	//char	c3 = "destination";

	//o 6 representa o tamanho de source
	printf("Size of source -> 6, number of caracteres to copy to dest -> 3:\n sizeof source: %lu, destination string: %s\n", ft_strlcpy(c2, c1, 4), c2);

	return (0);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (i < destsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

int	ft_strlen(const	char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
