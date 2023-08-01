#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t count = 0;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;

		if (ptr <= ptr->next)
		{
			printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
			break;
		}
		ptr = ptr->next;
	}

	return (count);
}
