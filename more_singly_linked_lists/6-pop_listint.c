#include "lists.h"
/**
*
*
*/
int pop_listint(listint_t **head)
{
 listint_t *tmp;
 int data;

 data = tmp->n;
 tmp = *head;
 (*head) = (*head)->next;
 free(tmp);
 return (data);
}