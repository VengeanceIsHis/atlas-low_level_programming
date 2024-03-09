#include "lists.h"
/**
 *add_node - adds node to beginning of a linked list
 *@head: head is the beginning node of a linked list
 *@str: element to be stored in node
 *Return: address of new node*/
list_t *add_node(list_t **head, const char *str)
{
 struct list_s *new;
 char *added_string = "";

 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
 added_string = copyString(str);
 new->str = added_string;
 new->next = (*head)->next;
 (*head)->next = (*new);
 return(new);
}
char* copyString(const char *s)
{
 char* s2;
 s2 = (char*)malloc(20);

 strcpy(s2, s);
 return (char*)s2;
}