#include "lists.h"
/**
*
*
*
*/
size_t listint_len(const listint_t *h)
{
 size_t count;
 while (h)
 {
  if (h->n)
  count++;
  h = h->next;
 }
 return (count);
}