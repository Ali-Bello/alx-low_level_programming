#include "lists.h"

/**
  * list_len - how many elements in a list.
  * @h: a ptr to the list.
  * Return: the length of the list.
  */

size_t	list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
