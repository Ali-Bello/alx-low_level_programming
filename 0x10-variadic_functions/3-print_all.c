#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints every argument passed.
  * @format: the order to follow.
  * @...: variables arguments.
  */

void	print_all(const char * const format, ...)
{
	va_list		args;
	unsigned int	i;
	char		*tmp, *sep;

	i = 0;
	sep = ", ";
	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				tmp = va_arg(args, char *);
				if (!tmp)
					tmp = "(nil)";
				printf("%s%s", tmp, sep);
				break;
		}
		if (!format[++i + 1])
			sep = "";
	}
	printf("\n");
	va_end(args);
}
