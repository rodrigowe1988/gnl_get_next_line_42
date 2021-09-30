#include <stdio.h>

int	main(void)
{
	FILE	*the_file = fopen("teste-sql-rodrigoWeber.txt", "r");
	if (the_file == NULL)
	{
		perror("Unable to open the file.");
		exit(1);
	}
	char	line[100];
	while (fgets(line, sizeof(line), the_file))
		printf("%s", line);
	return (0);
}
