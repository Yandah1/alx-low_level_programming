#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: Pointer to the head of the single linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
