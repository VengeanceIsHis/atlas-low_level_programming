#include "lists.h"
/**
*sum_listint - function that returns the sum of all int data
*@head: first node in linked list
*Return: sum of linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
