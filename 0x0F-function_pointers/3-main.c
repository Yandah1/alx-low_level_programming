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
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((num2 == 0) && ((*argv[2] == '/') || (*argv[2] == '%')))
	{
		printf("Error\n");
		return (100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(num1, num2);
	printf("%d %s %d = %d\n", num1, argv[2], num2, result);

	return (0);
}
