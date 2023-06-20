#include "main.h"
/**
  *print_last_digit - prints the last digit of a number
  *@n: the number to work with
  *Return: the value of the last digit
  */
int print_last_digit(int n)
{
	int a;
		if (n < 0)
			n *= -1;
		a = n % 10;
		if (a < 0)
			a *= -1;
		_putchar(a + '0');
			return (a);
}
