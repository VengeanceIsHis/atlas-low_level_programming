#include "lists.h"
/**
 *add_node - adds node to beginning of a linked list
 *@head: head is the beginning node of a linked list
 *@str: element to be stored in node
 *Return: address of new node*/
list_t *add_node(list_t **head, const char *str)
{
 list_t *new;
 char *added_string = copyString(str);

 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
 new->str = added_string;
 new->next = (*head)->next;
 (*head)->next = new;
 return(new);
}
char* copyString(const char *s1)
{
	char *s2 = "";
	int i;

 for (i = 0; s1[i] != '\0'; ++i)
	{
  s2[i] = s1[i];
 }
	return (s2);
}