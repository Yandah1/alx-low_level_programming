#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the sum of args positive numbers.
 * @argc: argumentcount
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a;

	for (a = 1; a < argc; a++)
	{
		int c = 0;

		while (argv[a][c])
		{
		if (!isdigit(argv[a][c]))
		{
		printf("Error\n");
		return (1);
	}
	c++;
	}
	sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

