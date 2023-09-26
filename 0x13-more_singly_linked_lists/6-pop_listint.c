#include "lists.h"

/**
 * pop_listint - frees the head of a list.
 * @head: ptr to the list.
 * Return: the head node data.
*/

int	pop_listint(listint_t **head)
{
	listint_t	*temp;
	int		tmp = 0;

	if ((*head))
	{
		temp = (*head)->next;
		tmp = (*head)->n;
		free((*head));
		(*head) = temp;
	}

	return (tmp);
}
