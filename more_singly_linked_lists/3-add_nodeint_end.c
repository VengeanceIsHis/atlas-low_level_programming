#include "lists.h"
/**
*
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, tmp;

	tmp = head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (tmp != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}