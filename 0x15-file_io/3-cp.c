#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * error_file - print error message and exit
 * @file_from: the file_from.
 * @file_to: the file_to.
 * @argv: arguments passed to the program
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: first arguments.
 * @argv: An array for the second  arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	do {
		r = read(file_from, buffer, 1024);
		if (r == -1)
			error_file(-1, 0, argv);
		w = write(file_to, buffer, r);
		if (w == -1)
			error_file(0, -1, argv);
	} while (r > 0);

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close files\n");
		exit(100);
	}

	return (0);
}
