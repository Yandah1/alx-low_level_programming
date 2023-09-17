#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific index in a
 *                         doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the specified index, or NULL if the
 *	index is out of bounds or the list is empty.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
