#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;

	while (old_size--)
	((char *)ptr2)[old_size] = ((char *)ptr)[old_size];

		free(ptr);

	return ((void *)ptr2);
}
