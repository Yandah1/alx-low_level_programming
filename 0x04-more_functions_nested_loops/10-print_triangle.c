#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of of the triangle
 * Description: Use the character # to print the triangle.
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b >= 1; b--)
			{
			if (a < b)
				_putchar(' ');
			else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
