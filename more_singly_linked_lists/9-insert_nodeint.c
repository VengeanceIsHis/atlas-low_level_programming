#include "lists.h"
/**
*
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 listint_t *new, *tmp;
 unsigned int i;

	new = malloc(sizeof(listint_t));
	for (i = 0; i < idx; i++)
	{
		if (head == NULL || *head == NULL)
		{
			return (NULL);
		}
		(*head) = (*head)->next;
	}

	new->n = n;
	new->next = (*head);
	return (new);
}