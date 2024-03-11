#include "lists.h"
/**
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i;

 for (i = 0; i < index; i++)
 {
  head = head->next;
 }
 if (head)
 {
 return (head);
 }
 else
 {
  return (NULL);
 }
}