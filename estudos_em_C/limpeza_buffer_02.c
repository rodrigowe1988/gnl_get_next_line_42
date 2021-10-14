/**
 * Para evitar as 'sujeiras que ficam no buffer do teclado'
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	ch;
	int		i;
	char	vetor[5];
	for (i = 0; i < 5; i++)
	{
		printf("Digite o %do caracter: ", i+1);
		scanf(" %c", &ch);
		vetor[i] = ch;
		setbuf(stdin, NULL);
	}
	printf("o vetor criado é: %s\n", vetor);
	return (0);
}
