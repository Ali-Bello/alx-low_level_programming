#include "main.h"

/**
  * _strlen_recursion - calculate the length of a string.
  * @s: the string.
  * Return: the length.
  */

int	_strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
  * _recursive_check - compares the string from both ways.
  * @s: the string.
  * @i: index 1.
  * @len: index 2.
  * Return: returns 1 if the string is simetrical, otherwise 0.
  */

int	_recursive_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_recursive_check(s, ++i, --len));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 it's not
 */
int	is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_recursive_check(s, 0, len));
}
