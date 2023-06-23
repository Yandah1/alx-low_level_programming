#include "main.h"

/**
 * print_line - function that draws a straight line
 * Description: n is the number of times the character.
 * Return: If n is 0 or less
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
