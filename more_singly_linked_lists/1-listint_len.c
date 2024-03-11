#include "lists.h"
/**
*
*
*
*/
size_t listint_len(const listint_t *h)
{
 size_t count;
	listint_t *tmp;
	tmp = h;
 while (tmp != NULL)
 {
  tmp = tmp->next;
  count++;
 }
 return (count);
}