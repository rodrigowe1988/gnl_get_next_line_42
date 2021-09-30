/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42_function_substr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roweber <roweber@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:56:44 by roweber           #+#    #+#             */
/*   Updated: 2021/09/30 15:04:16 by roweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char	*src);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);

int	main(void)
{
	printf("Testando a função substr(): \n");
	printf("njo: %s\n", ft_substr("bonjour", 2, 3));

	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > start)
	{
		i = 0;
		while (s[i + start] && i < len)
			i ++;
		len = i;
	}
	else
		return (ft_strdup(""));
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}

char	*ft_strdup(const char	*src)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (p);
	ft_bzero(p, count * size);
	return (p);
}

int	ft_strlen(const	char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
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

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	size_t	count;

	str = (char *)ptr;
	count = 0;
	while (count < n)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (ptr);
}
