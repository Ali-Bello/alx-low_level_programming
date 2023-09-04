#include "main.h"
#include <stdlib.h>

/**
  * _strsize - returns the size of a string.
  * @s: the string.
  * Return: the size.
  */

int	_strsize(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i + 1);
}

/**
  * argstostr - converts arguments into a string.
  * @ac: arguments count.
  * @av: arguments vector.
  * Return: a pointer to the string (if string).
  */

char	*argstostr(int ac, char **av)
{
	int	size;
	int	i;
	int	j;
	int	y;
	char	*str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	i = 0;
	while (i < ac)
		size += _strsize(av[i++]);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	y = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			str[y++] = av[i][j++];
		str[y++] = '\n';
		i++;
	}
	str[y] = '\0';
	return (str);
}
