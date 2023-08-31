#include "main.h"

/**
  * _calculate - do the maths for sqrt.
  * @nb: the number to search for it's sqrt.
  * @precision: how close the result is.
  * @x: tmp variable necessary for the maths.
  * Return: the sqrt (if any).
  */
int	_calculate(int nb, int precision, int x)
{
	if (x * x == nb)
		return (x);
	if ((x - nb / x) > precision)
		return (_calculate(nb, precision, (x + nb / x) / 2));
	return (-1);
}
/**
  * _sqrt_recursion - calculate the natural sqrt of a given n;
  * @n: the number too calculate it's sqrt;
  * Return: the sqrt (if exists).
  */
int	_sqrt_recursion(int n)
{
	int	precision;
	int	x;

	if (n < 0)
		return (-1);
	x = n;
	precision = 1;
	return (_calculate(nb, precision, x));
}
