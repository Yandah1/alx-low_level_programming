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
		if (i % 15 == 0)
		{
			printf("%d fizzbuzz\n", i);
		}
		else if (i % 3 == 0)
		{
			printf("%d fizz\n", i);
		}
		else if (i % 5 == 0)
		{
			printf("%d buzz\n", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);

}
