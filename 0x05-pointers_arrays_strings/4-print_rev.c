#include "main.h"
/**
 * print_rev -function that prints a string, in reverse
 * @s: string in this case
 * Return : 0
 */
void print_rev(char *s)
{

	int length = 0;
	int i;

	while (*s != '\n')
	{
		length++;
		s++;
	}
		for (i = length - 1; i > 0; i--)
		{
			_putchar(*s--);
		}
		_putchar('\n');
}
