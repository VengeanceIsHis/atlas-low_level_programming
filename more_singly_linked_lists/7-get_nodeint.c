#include "lists.h"
/**
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i;
	listint_t *tmp;

	tmp = head;
 for (i = 0; i < index; i++)
 {
  tmp = tmp->next;
 }
 if (tmp != NULL)
 {
 return (tmp);
 }
 else
 {
  printf("(nil)")
 }
}