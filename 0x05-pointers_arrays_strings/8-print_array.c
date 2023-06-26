#include "main.h"
#include <stdio.h>

/**
 * print_array -function that prints a string, in reverse
 * @a: array of integers
 * @n: number of elements
 * Return : 0
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	printf("%d", *(a + c));
		if (c < (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
