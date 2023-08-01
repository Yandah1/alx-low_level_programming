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
	size_t len = 0;
	listint_t *ptr1, *ptr2;

	if (!h || !*h)
		return (0);

	ptr1 = *h;
	ptr2 = (*h)->next;

	while (ptr2 != NULL && ptr2 < ptr1)
	{
		free(ptr1);
		len++;

		ptr1 = ptr2;
		ptr2 = ptr2->next;

		if (ptr2 != NULL && ptr2 < ptr1)
			ptr2 = ptr2->next;
	}
	free(ptr1);
	len++;

	*h = NULL;

	if (ptr2)
	{
		free(ptr2);
		len++;
	}

	return (len);
}
