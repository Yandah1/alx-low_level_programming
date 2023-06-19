#include <stdio.h>
/**
 * main - main block
 * Descriptio: print lowercases alphabet in reverse.
 * Return: 0
 */

int main(void)

{
	char low;

	for (low = 'z'; low >= 'a' ; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
