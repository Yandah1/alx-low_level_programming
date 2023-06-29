#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, f, end;

	for (i = 0, f = n - 1; i < f; i++, f--)
	{
		end = a[i];
		a[i] = a[f];
		a[f] = end;
	}
}


