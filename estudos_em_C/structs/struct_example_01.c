#include <stdio.h>

int	main(void)
{
	struct	fish
	{
		const char	*name;
		const char	*species;
		int			teeth;
		int			age;
	};
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	printf("Name: %s, species: %s, teeth quantity: %d and age: %d.\n", snappy.name, snappy.species, snappy.teeth, snappy.age);
}
