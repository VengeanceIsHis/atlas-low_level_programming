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
	for (i = 0; i < idx - 1; i++)
	{
		(*head) = (*head)->next;
	}
	new->n = n;
	()
	(*head)->next = tmp;
	new->next = tmp;
	(*head)->next = new;
	return (new);
}