#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the pionter of the head.
 *
 * Return: the  head node's data that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current = *head;

	if (!head || !*head)
	{
		return (0);
	}
	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}
