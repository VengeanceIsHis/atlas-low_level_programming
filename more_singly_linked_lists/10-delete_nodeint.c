#include "lists.h"
/**
*
*
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int i;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; head && i < index; i++)
	{
	if (i == index && head != NULL)
	{
	tmp = *head;
	(*head) = (*head)->next;
	free(tmp);
	return (1);
	}
	else
	(*head) = (*head)->next;
	}

	return (-1);
}
