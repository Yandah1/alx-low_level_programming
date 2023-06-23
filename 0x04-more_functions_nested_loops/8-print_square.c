#include "main.h"

/**
 * print_square - function that prints the square
 * @size: size of square
 * Description: Only use putchar to print.
 */

void print_square(int size)
{
	int c, y;

	c = 0;
	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		y++;
	}
}
