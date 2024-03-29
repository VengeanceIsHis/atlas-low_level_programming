#include "lists.h"
/**
*free_listint - function that deletes an entire linked list
*@head: pointer to the first node
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp, *next;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
