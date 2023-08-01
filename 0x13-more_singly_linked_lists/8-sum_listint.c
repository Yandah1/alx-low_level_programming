#include "lists.h"

/**
 * sum_listint - function that sum of all the data(n) in a listint_t list
 * @head: first node of linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

