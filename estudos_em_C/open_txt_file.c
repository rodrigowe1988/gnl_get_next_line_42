/**
 * Programa para abrir um arquivo qualquer
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE	*the_file = fopen("teste_leitura.txt", "r");
	if (the_file == NULL)
	{
		perror("Unable to open the file.");
		exit(1);
	}
	char	line[100];
	char	line2[21];
	printf("O arquivo original eh: \n");
	while (fgets(line, sizeof(line), the_file))
		printf("%s", line);
	printf("Digite uma frase com no máximo 20 caracteres: ");
	scanf("%s", line2);
	puts(line2);
	printf("O arquivo após o uso do fputs: \n");
	return (0);
}
