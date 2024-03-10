#include "lists.h"
/**
*print_listint - function that prints all elements
*@h: head node of linked list
*Return: size of list
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
