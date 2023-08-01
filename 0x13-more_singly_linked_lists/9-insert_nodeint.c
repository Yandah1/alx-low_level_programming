#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of first node of listint_t list.
 * @idx: index of the list for the new node. Index starts at 0.
 * @n: integer to be included in new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL && head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

		while (temp != NULL && j < idx - 1)
		{
			temp = temp->next;
			j++;
		}

		if (temp == NULL)
		{
			return (NULL);
		}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
