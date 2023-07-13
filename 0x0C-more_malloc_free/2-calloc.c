#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb:number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		new[i] = 0;
		i++;
	}

	return ((void *)new);
}
