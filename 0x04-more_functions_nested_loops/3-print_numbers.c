#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * Description: Can only use putchar twice
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
