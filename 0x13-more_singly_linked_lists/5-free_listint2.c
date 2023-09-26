#include "lists.h"

/**
 * free_listint2 - frees all the list and set the head to NULL.
 * @head: ptr to the list.
*/

void	free_listint2(listint_t **head)
{
	listint_t	*tmp;

	if ((*head))
	{
		while ((*head))
		{
			tmp = (*head)->next;
			free((*head));
			(*head) = tmp;
		}
		(*head) = NULL;
	}
}
