#include "main.h"
#include <stdlib.h>

/**
  * create_array - function to create an array full of c characters;
  * @size: the size of the array.
  * @c: the character to fill with.
  * Return: pointer to the array if succes, otherwise NULL.
  */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char		*str;

	i = 0;
	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	while (i < size)
		str[i++] = c;
	return (str);
}
