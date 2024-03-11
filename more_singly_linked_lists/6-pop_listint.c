#include "lists.h"
/**
*pop_listint - function that deletes the head node of linked list
*@head: Pointer to pointer of first node
*Return: data of node deleted
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data = tmp->n;
	(*head) = (*head)->next;
	free(tmp);
	return (data);
}
