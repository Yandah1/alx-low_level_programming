#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp;)
	{
		list_t *next = temp->next;

		free(temp->str);
		free(temp);
		temp = next;
	}
}

