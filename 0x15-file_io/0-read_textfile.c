#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
