#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 16 in lowercases.
 * Return: 0
 */

int main(void)
{
	int n;
	int d;

	for (n = '0' ; n <= '9'; n++)
	putchar(n);

	for (d = 'a'; d <= 'f'; d++)
	putchar(d);
	putchar('\n');

	return (0);

}
