#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - performs a basic arithmetic operation on two integer operands
 * @argc: the number of command-line arguments
 * @argv: an array of strings
 *
 * Return: 0 if successful, 98 if incorrect number of arguments,
 *         99 if invalid operator, or 100 if division/modulus by zero
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n"), exit(99);
	}
	if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		printf("Error\n"), exit(100);

	printf("%d\n", (get_op_func(argv[2])(num1,num2)));

	return (0);
}
