#include "lists.h"
/**
*get_nodeint_at_index - function that returns the node at index position
*@head: first node in list
*@index: position in list to return
*Return: node at index position if possible
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (tmp);
}
