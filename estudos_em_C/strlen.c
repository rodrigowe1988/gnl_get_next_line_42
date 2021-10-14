#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	word1[] = "Rodrigo";
	char	word2[] = "";

	printf("A palavra tem %zu letras.\n", ft_strlen(word1));
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
