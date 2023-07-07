#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two string.
 * @dest: first string
 * @src: second stringi
 * @n: input
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
		dest[c] = '\0';
		return (dest);
}
