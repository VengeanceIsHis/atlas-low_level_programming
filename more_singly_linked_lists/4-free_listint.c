#include "lists.h"
/**
*
*
*/
void free_listint(listint_t *head)
{
	listint_t *tmp, next;
	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(head);
		tmp = next;
	}
}