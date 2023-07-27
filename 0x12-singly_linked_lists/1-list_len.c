#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the first element of the list.
 *
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t value = 0;
	const list_t *x = h;

	while (x != NULL)
	{
		value++;
		x = x->next;
	}

	return (value);
}
