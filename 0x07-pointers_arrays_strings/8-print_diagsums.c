#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -function that prints the sum of the two diagonals of,
 * of a square matrix of integers
 * @a: the pointer
 * @size: the size of the square matrix.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int c;

	for (c = 0; c < size; c++)
	{
		sum1 += *(a + c * size + c);
		sum2 += *(a + c * size + (size - c - 1));
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
