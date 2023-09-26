#include "lists.h"

/**
 * free_listint - frees completly a list.
 * @head: ptr to the list.
*/

void	free_listint(listint_t *head)
{
	listint_t	*tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
