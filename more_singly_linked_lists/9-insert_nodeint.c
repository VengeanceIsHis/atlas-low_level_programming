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
		(*head) = (*head)->next;
	}
	new->n = n;
	tmp = (*head)->next;
	new->next = tmp;
	(*head)->next = new;
	return (new);
}