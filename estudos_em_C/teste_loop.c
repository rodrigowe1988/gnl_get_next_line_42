#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	x;

	x = 1;
	while (x <= 10)
	{
		write(1, &x, 1);
		x++;
	}
	return (0);
}
