#include "lists.h"

/**
 * print_listint - prints a int list.
 * @h: ptr to the head of the list.
 * Return: length of the list.
*/

size_t	print_listint(const listint_t *h)
{
	size_t	length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
