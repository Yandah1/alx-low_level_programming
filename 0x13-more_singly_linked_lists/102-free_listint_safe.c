#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe -  function that frees a listint_t list
 * @h: pointer to a pointer to the head
 *
 * Return: the size of the list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *temp = *h, *next;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
		length++;
	}

	*h = NULL;

	return (length);
}

