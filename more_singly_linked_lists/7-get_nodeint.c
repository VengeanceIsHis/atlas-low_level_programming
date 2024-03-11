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
		if (tmp == NULL)
			{
				return (NULL);
			}
  tmp = tmp->next;
 }
 return (tmp);
}