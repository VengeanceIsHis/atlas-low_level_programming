#include "lists.h"
/**
*add_nodeint - function that adds node with int element
*@head: pointer to the pointer of the first node
*@n: int element related to new node
*Return: address of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return NULL;
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
