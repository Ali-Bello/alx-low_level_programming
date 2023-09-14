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
	if (ac == 2)
	{
		char	*ptr;
		int	i, bytes;

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
			printf("%02hhx ", ptr[i]);
			i++;
		}
		printf("\n");
		return (0);
	}
	printf("Error\n");
	exit(1);
}
