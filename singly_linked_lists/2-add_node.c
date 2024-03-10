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
	unsigned int i = 0;

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
	while (added_string[i] != '\0')
	{
		len = i + 1;
		added_string[i] = len;
		i = i + 1;
	}
	i = 0;
 new->str = added_string;
	new->len = len;
 new->next = (*head);
 (*head) = new;
 return(new);
}