#include "lists.h"
/**
 *add_node - adds node to beginning of a linked list
 *@head: head is the beginning node of a linked list
 *@str: element to be stored in node
 *Return: address of new node*/
list_t *add_node(list_t **head, const char *str)
{
 list_t *new;
	list_t *tmp;
 char *added_string = strdup(str);
	unsigned int len;

 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
	tmp = (*head);
	while (tmp != NULL)
	{
		len = len + 1;
		tmp = tmp->next;
	}
	len = strlen(added_string;
 new->str = added_string;
	new->len = len;
 new->next = (*head);
 (*head) = new;
 return(new);
}