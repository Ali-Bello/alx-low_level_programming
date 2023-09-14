#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - calculator.
  * @ac: argument count.
  * @av: argument vector.
  * Return: 0 on succes.
  */

int	main(int __attribute__((__unused__)) ac, char **av)
{
	int	num1, num2;
	int	(*p)(int a, int b);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(av[2]);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if ((av[2][0] == '/' || av[2][0] == '%') && !num2)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(num1, num2));
	return (0);
}
