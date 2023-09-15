#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - print every number in the arguments.
  * @separator: separates numbers with.
  * @n: the number of arguments.
  * @...: variable number of arguments.
  */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int	i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
