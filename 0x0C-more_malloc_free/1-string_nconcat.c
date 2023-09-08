#include "main.h"
#include <stdlib.h>

/**
  * _strlen - calculcate the length of a string.
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
  * _concat - concatinates string1 && upto n elements from string2 into dest.
  * @dest: the destination string.
  * @s1: string1.
  * @s2: string2.
  * @n: number of elements to copy from s2.
  * Return: none.
  */

void	_concat(char *dest, char *s1, char *s2, unsigned int n)
{
	int		i;
	unsigned int	j;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
}

/**
  * string_nconcat - concatinate s1 and n elements from s2
  * in a newly allocated string.
  * @s1: string1.
  * @s2: string2.
  * @n: number of elements to cpy from s2.
  * Return: pointer to the newly created string (on succes).
  */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int	size;
	char	*ptr;
	int	len2;

	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;
	size = _strlen(s1) + len2 + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	_concat(ptr, s1, s2, n);
	return (ptr);
}
