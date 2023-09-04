#include "main.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string in new array;
  * @str: the src string.
  * Return: a pointer to the destination string.
  */
char	*_strdup(char *str)
{
	char	*s;
	int	i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
