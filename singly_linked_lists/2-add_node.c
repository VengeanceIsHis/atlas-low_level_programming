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
	char *temp_string = malloc(sizeof(char *));
	temp_string = cpystr(added_string, temp_string);

 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
  return (NULL);
 }
	tmp = (*head);
	while (temp_string[i] != '\0')
	{
		len = i + 1;
		temp_string[i] = len;
		i++;
	}
 new->str = added_string;
	new->len = len;
 new->next = (*head);
 (*head) = new;
 return(new);
}
char *cpystr(char *str, char *dest)
{
	int j;

	while (str[j] != '\0')
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return dest;
}