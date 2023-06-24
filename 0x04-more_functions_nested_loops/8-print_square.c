#include "main.h"

/**
 * print_square - function that prints the square
 * @size: size of square
 * Description: Only use putchar to print.
 */

void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)

		_putchar('\n');
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
