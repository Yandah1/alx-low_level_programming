#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @n: the number of byte in the memory
 * @b: the value of the constant byte.
 * @s: is the pointer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
