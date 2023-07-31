#include "lists.h"

/**
 * free_listint - frees a listint_t inked list
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

