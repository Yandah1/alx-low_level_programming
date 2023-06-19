#include <stdio.h>

/**
 *main -Entry point
 *Description:Prints the alphabet using putchar function.
 *Return: 0 Always
 */
int main(void)
{
	char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
for (low = 'A'; low <= 'Z'; low++)
{
putchar(low);
}
{
putchar('\n');
}
return (0);
}
