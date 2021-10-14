#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char	word1[] = "Rodrigo";
	char	word2[] = "";

	printf("A palavra tem %d letras.\n", ft_strlen(word1));
	return (0);
}

int	ft_strlen(char	*str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
