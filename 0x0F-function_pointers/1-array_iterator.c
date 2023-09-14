#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - executes a function to each element in an array.
  * @array: the array to apply to.
  * @size: the size of the array.
  * @action: the function to execute.
  */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (array && size && action)
	{
		i = 0;
		while (i < size)
			action(array[i++]);
	}
}
