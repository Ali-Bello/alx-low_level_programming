#include "main.h"

/**
  * print_rev_recursion - prints a string in reverse;
  * @s: string to be printed.
  */
void	print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rev_recursion(++s);
		_putchar(*s);
	}
}
