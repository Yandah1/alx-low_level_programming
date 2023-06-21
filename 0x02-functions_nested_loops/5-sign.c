#include "main.h"
/**
 *print_sign - Check if input number will be greater,equal or less than zero.
 *@n: As an integer in output numbe.
 *Return: 1 is greater than zero, 0 is zero o.
 *-1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
	_putchar('\n');
}
