/**
 * simplesmente retorna o número do fd (file descriptor)
*/

#include <stdio.h>

int	main(void)
{
	FILE	*my_file;
	FILE	*my_file2;
	FILE	*my_file3;
	FILE	*my_file4;
	int		descriptor;
	int		descriptor2;
	int		descriptor3;
	int		descriptor4;

	my_file = fopen("teste.txt", "r");
	my_file2 = fopen("teste_leitura.txt", "r");
	my_file3 = fopen("teste-sql-rodrigoWeber.txt", "r");
	my_file4 = fopen("teste.txt", "r");

	descriptor = fileno(my_file);
	descriptor2 = fileno(my_file2);
	descriptor3 = fileno(my_file3);
	descriptor4 = fileno(my_file4);

	printf("O fd de my_file eh %d\n", descriptor);
	printf("O fd de my_file2 eh %d\n", descriptor2);
	printf("O fd de my_file3 eh %d\n", descriptor3);
	printf("O fd de my_file4 eh %d\n", descriptor4);

	fclose(my_file);
	fclose(my_file2);
	fclose(my_file3);
	return (0);
}
