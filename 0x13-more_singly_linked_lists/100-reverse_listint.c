#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the head in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr = NULL;
	listint_t *next_ptr = NULL;

	while (*head != NULL)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;
		prev_ptr = *head;
		*head = next_ptr;
	}

	*head = prev_ptr;
	return (*head);
}
