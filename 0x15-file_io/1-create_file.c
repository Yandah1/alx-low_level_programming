#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - fuction that create a file.
 * @filename: file to read
 * @text_content: string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || w == -1)
		return (-1);

	if (text_content)
	w = write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
