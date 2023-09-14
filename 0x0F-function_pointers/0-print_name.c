#include "function_pointers.h"

/**
  * print_name - prints a name using a ptr to func.
  * @name: the name to be printed.
  * @f: the ptr to function.
  */

void	print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
