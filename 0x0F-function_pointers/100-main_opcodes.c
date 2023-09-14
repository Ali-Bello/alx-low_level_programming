#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints the assembly code of itself.
  * @ac: argument count.
  * @av: argument vector.
  * Return: 0 on succes.
  */

int	main(int ac, char **av)
{
	char	*ptr;
	int	bytes, i;

	if (ac == 2)
	{

		i = 0;
		bytes = atoi(av[1]);
		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		ptr = (char *)main;
		while (i < bytes)
		{
			if (i == bytes - 1)
				printf("%02hhx\n", ptr[i]);
			else
				printf("%02hhx ", ptr[i]);
			i++;
		}
		return (0);
	}
	printf("Error\n");
	exit(1);
}
