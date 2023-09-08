#include "main.h"
#include <stdlib.h>

/**
  * array_range - allocates an array containing numbers min...max;
  * @min: 1st element of the array.
  * @max: last element of the array.
  * Return: Pointer to the array.
  */

int	*array_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = min++;
	return (ptr);
}
