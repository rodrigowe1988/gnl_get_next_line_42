/**
 * ao rodarmos esse programa temos um erro no buffer, pois ao pressionarmos a tecla ENTER esse comando fica salvo no buffer indo para o próximo passo do loop como \n que é o caracter de quebra de linha referente á tecla ENTER
*/

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
