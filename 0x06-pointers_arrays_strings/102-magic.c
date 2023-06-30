#include <stdio.h>
/**
 * main -write your line of code here.
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code
 * -anything else than this line of code
 * Return: 0
 */
int main(void)
{
	int a[] = { 72, 69, 76, 76, 79};
	int *p;

	p = &a[0];
	p += 2;

	/*  add this line of code */
	printf("a[2] = %d\n", p[0]);

	return (0);
}
