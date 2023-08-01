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
	size_t count = 0;
	int change;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		change = *h - (*h)->next;
		if (change > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
