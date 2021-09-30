#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE	*fPointer;
	char	singleLine[150];

	fPointer = fopen("teste.txt", "r");
	while (!feof(fPointer))
	{
		fgets(singleLine, 150, fPointer);
		puts(singleLine);
	}

	fclose(fPointer);
	return (0);
}
