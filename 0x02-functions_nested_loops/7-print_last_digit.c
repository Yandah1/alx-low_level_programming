#include "main.h"
/**
 *print_last_digit -  prints the last digit of a number.
 *@n: The number to be tested
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
	{
		lastd = -1 * (n % 10);
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		lastd = n % 10;
		_putchar(lastd + '0');
		_putchar('\n');
		return (lastd);
	}
}
