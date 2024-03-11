#include "lists.h"
/**
*
*
*/
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->n);
		head = head->next;
	}
	free(head);
}