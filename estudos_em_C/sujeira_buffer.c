#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	ch;
	int		i;
	for (i = 0; i < 5; i++)
	{
		printf("Digite o %do caracter: ", i+1);
		scanf("%c", &ch);
	}
	system("pause");
	return (0);
}
