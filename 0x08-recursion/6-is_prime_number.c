#include "main.h"

/**
  * _prime_check - checks if n can be devided by i different than 1 and n.
  * @nb: number to check.
  * @i: devider.
  * Return: returns 1 if number is prime, otherwise 0.
  */
int	_prime_check(int nb, int i)
{
	if (i == 1)
		return (1);
	if (nb % i == 0 && i > 0)
		return (0);
	return (_prime_check(nb, --i));
}

/**
  * is_prime_number - returns wether a given number is prime or not;
  * @n: the number to check.
  * Return: returns 1 if prime, otherwise 0.
  */

int	is_prime_number(int n)
{
	if (nb <= 1)
		return (0);
	return (_prime_check(n, n / 2));
}
