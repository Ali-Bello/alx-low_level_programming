#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index.
 * @head: ptr to a list.
 * @index: the given index.
 * Return: 1 if succes , -1 otherwise.
*/

int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i = 0;
	listint_t	*tmp = (*head);
	listint_t	*current;

	if (head)
	{
		if (index == 0)
		{
			(*head) = tmp->next;
			free(tmp);
			return (1);
		}

		while (tmp && i < index - 1)
		{
			tmp = tmp->next;
			i++;
		}

		current = tmp->next;
		if (current)
		{
			tmp->next = current->next;
			free(current);
			return (1);
		}
	}

	return (-1);
}
