#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int	_atoi(char *s)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (!(s[i] >= '0' && s[i] <= '9'))
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	result;
		int	tmp;
		int	i;

		i = 1;
		result = 0;
		while (argv[i])
		{
			tmp = _atoi(argv[i]);
			if (tmp == 0)
			{
				printf("Error\n");
				return (1);
			}
			result += tmp;
			i++;
		}
		printf("%d\n", result);
	}
	else
		printf("0\n");
	return (0);
}
