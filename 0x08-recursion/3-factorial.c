#include "main.h"

/**
  * factorial - returns the factorial of given number;
  * @n: the number to operate.
  * Return: the factorial.
  */
int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	return (n * factorial(n - 1));
}
