#include "lists.h"
/**
*listint_len - function that returns the length of linked list
*@h: head node in linked list
*Return: length of list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
