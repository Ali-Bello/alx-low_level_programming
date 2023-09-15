#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - print strings given as arguments.
  * @separator: the separator of the strings.
  * @n: the number of arguments.
  * @...: variable arguments.
  */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list		args;
	unsigned int	i;
	char		*tmp;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		tmp = va_arg(args, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
