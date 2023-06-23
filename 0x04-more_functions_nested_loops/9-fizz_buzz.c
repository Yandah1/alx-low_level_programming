#include <stdio.h>

/**
 * main - main block,prints fizz buzz from numbers 1 to 100
 * Description: multiples of 3, print Fizz
 * multiples of 5 print Buzz.
 * multiples of both 3 and 5 print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d FizzBuzz", i);
		else if (i % 3 == 0)
			printf("%d Fizz", i);
		else if (i % 5 == 0)
			printf("%d Buzz", i);
		else
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
