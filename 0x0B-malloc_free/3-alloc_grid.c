#include "main.h"
#include <stdlib.h>

/**
  * _memset0 - fill a block of memory with 0's.
  * @array: the block of the memory.
  * @size: the size of the block.
  */

void	_memset0(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
		array[i++] = 0;
}

/**
  * alloc_grid - allocate a 2D array.
  * @width: the width of the array.
  * @height: the height of the array.
  * Return: a pointer to the 2D array.
  */

int	**alloc_grid(int width, int height)
{
	int	**ptr;
	int	i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		_memset0(ptr[i], width);
		i++;
	}
	return (ptr);
}
