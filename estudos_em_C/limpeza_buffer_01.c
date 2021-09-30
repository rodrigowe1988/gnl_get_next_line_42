#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	/*Existem muitas formas de limpar o buffer do teclado. Minha sugestão é utilizar o seguinte comando:*/

	//coloca NULL no buffer do teclado
	setbuf(stdin, NULL);

	//NÃO utilize o comando
	fflush(stdin);
	/*a função fflush() serve para limpar o buffer, mas tem comportamento "indefinido para o buffer do teclado"*/
}
