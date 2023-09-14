#include "function_pointers.h"

/**
  * int_index - gets the index of a matching element.
  * @array: the array where elements.
  * @size: the size of the array.
  * @cmp: the function to find a match.
  * Return: the index of the matching element (on succes).
  */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array && cmp)
	{
		i = 0;
		if (size > 0)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
