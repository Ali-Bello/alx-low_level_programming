#include "lists.h"

/**
 * listint_len - calculates the length of a list.
 * @h: ptr to the head of the list.
 * Return: length of the list.
*/

size_t	listint_len(const listint_t *h)
{
	size_t  length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
