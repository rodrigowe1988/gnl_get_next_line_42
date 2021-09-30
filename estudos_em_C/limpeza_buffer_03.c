#include <stdio.h>

void	cleanBuffer(void);

int	main(void)
{
	char	a, b, c;

	printf("Digite o 1o caracter: \n");
	scanf("%c", &a);
	cleanBuffer();
	printf("Digite o 2o caracter: \n");
	scanf("%c", &b);
	cleanBuffer();
	printf("Digite o 3o caracter: \n");
	scanf("%c", &c);
	cleanBuffer();

	printf("Você digitou os caracteres: ");
	printf("%c", a);
	printf("%c", b);
	printf("%c", c);

	return(0);
}

void	cleanBuffer(void)
{
	char	c;
	while ((c = getchar()) != '\n' && c != EOF);
	//enquanto o programa retornar um getchar() e não encontrar quebra de linha ou EOF (end of file)
}
