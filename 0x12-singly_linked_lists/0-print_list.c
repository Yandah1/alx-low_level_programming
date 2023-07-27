#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the first element of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t value = 0;
	const list_t *x = h;

	while (x != NULL)
	{
		if (x->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", x->len, x->str);
		}
		x = x->next;
		value++;
	}
	return (value);
}
