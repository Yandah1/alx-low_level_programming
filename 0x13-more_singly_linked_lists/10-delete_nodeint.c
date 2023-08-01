#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 if (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (index != 0)
	{
		if (current == NULL)
			return (-1);

		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);

	return (1);
}
