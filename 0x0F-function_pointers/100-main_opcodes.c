#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if incorrect number of arguments,
 *         2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int num_byte, i = 0;
	char *array;

	array = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_byte = atoi(argv[1]);

	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < num_byte)
	{
		if (i == num_byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}

	return (0);
}
