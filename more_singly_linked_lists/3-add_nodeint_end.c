#include "lists.h"
/**
*
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = new;
	new->next = NULL;

	return (new);
}