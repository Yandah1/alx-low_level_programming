#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data (n)
 *		of a dlistint_t linked list.
 * @head: Pointer to the head of doubly linked list
 *
 * Return: The sum or  0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t  *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
