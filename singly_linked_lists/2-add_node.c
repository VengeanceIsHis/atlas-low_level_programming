#include "lists.h"
/**
 *add_node - adds node to beginning of a linked list
 *@head: head is the beginning node of a linked list
 *@str: element to be stored in node
 *Return: address of new node*/
list_t *add_node(list_t **head, const char *str)
{
 list_t *new;
	unsigned int len;

	while (str[len])
		len++;
 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
 new->str = strdup(str);
	new->len = len;
 new->next = (*head);
 (*head) = new;
 return (*head);
}