#include "lists.h"
/**
	*list_len - returns the numer of elements in linked list
	*@h: head node of linked list
	*Return: number of elements
	*/
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
				if (h->str)
				{
								ele = ele + 1;
				}
				h = h->next;
	}
	return (ele);
}
