#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - safely allocate memory.
  * @b: the size to be allocated.
  * Return: pointer to the allocated memory (if any).
  */
void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
