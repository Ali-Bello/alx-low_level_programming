#include "main.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string.
  * @str: the string.
  * Return: the length.
  */

int	_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
  * str_concat - concatinates two strings.
  * @s1: 1st string.
  * @s2: 2nd string.
  * Return: Pointer to the new array if succes.
  */

char	*str_concat(char *s1, char *s2)
{
	int	length;
	int	i;
	int	j;
	char	*str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
