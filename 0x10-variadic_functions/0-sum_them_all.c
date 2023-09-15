#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of the function parametres.
  * @n: number of arguments.
  * @...: a variable number of arguments.
  * Return: the sum (on succes).
  */

int	sum_them_all(const unsigned int n, ...)
{
	va_list		args;
	unsigned int	i;
	int		result;

	va_start(args, n);
	i = 0;
	result = 0;
	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
