#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
	*print_list - prints len and str while iterating through list
	*@h: head node for list
	*Return: Number of nodes)
	*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n = n + 1;
	}
	return (n);
}
