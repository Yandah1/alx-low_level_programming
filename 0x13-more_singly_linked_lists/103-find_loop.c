#include "lists.h"

/**
 * find_listint_loop -function that finds the loop in a linked list
 * @head: pointer for linked list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	if (head == NULL)
		return (NULL);

	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr2 = ptr2->next->next;
		ptr1 = ptr1->next;

		if (ptr2 == ptr1)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}

	return (NULL);
}
