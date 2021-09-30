#include <stdio.h>

char	*ft_strchr(const char *str, int n);

int		main(void)
{
	char 	*str = "meu teste.com.br teste";

	printf("String after the [%c] is - |%s|\n", ' ', ft_strchr(str, ' '));

	return (0);
}

char	*ft_strchr(const char *str, int n)
{
	while (*str != (char)n)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return ((char *)(str));
}
