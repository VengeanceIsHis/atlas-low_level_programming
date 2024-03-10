#include "lists.h"
/**
*
*
*
*/
size_t listint_len(const listint_t *h)
{
 size_t count;
 while (h->next != NULL)
 {
  if (h != NULL)
  {
   count++;
  }
  h = h->next;
 }
 return (count);
}