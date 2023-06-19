#include <stdio.h>
/**
 * main - main block
 * Description: Print numbers of base 10 using putchar function.
 * Return: 0 Always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + 48);
	}
putchar('\n');
return (0);
}
