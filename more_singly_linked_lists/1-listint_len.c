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
  h = h->next;
  count++;
 }
 return (count);
}