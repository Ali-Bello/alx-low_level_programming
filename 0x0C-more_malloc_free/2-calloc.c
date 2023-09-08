#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates a block of memory in the heap.
  * @nmemb: number of elements of the block.
  * @size: the size of each elment in the block.
  * Return: pointer the block of memory.
  */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
