#include "lists.h"
/**
*
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 listint_t *new, *tmp;
 unsigned int i;

	new = malloc(sizeof(listint_t));
	 if (idx == 0)
  {
   return add_nodeint(head, n);
  }
		tmp = *head;
	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		{
			return (NULL);
		}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}