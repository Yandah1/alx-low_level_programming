#include <stdio.h>
/**
 * main - main block,prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	int largest = 2;

	while (n > largest)
	{
		if (n % largest == 0)
		{
		n /= largest;
		}
			else
		{
		largest++;
		}
	}

	printf("%d\n", largest);
	return (0);
}
