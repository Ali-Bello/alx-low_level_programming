#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints a single linked list elements.
  * @h: a pointer to the head of the list.
  * Return: the num of elements in the list.
  */

size_t	print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
