#include "lists.h"

/**
 * sum_listint - calculcates the sum of a list's data.
 * @head: ptr to a list.
 * Return: the sum.
*/

int	sum_listint(listint_t *head)
{
	int	sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
