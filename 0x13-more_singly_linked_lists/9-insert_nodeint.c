#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given index.
 * @head: ptr to a list.
 * @idx: the given index.
 * @n: new node's data.
 * Return: ptr to the new node.
*/

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int		i;
	listint_t		*new;
	listint_t		*temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
