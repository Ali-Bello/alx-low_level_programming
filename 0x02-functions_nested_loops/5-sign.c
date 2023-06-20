#include "main.h"
/**
  *print_sign - Prints the sign of a given number
  *@n: the number to be checked
  *Return: 1 if the number is postive, 0 if it's 0, -1 if it's negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
