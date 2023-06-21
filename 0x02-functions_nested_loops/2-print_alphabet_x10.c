#include "main.h"
/**
 *  print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 *  Return: 0 Always
 */
void print_alphabet_x10(void)
{
	int i;
	char y;

	for (i = 1; i  <= 10; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
	}
}
