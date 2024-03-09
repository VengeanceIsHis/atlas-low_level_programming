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
 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
 tmp = *head;
 new->str = &str;
 new->next = (*head);
 head->next = new;
 return(new);
}