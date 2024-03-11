#include "lists.h"
/**
*
*
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
	if (!tmp || !(tmp->next))
	{
		return (-1);
	}
	tmp = tmp->next;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
