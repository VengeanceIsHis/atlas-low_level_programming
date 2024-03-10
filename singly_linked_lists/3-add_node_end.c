#include "lists.h"
/**
*
*
*
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *tmp = *head;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
