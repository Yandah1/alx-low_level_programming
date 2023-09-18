#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @src: string
 * @dest: string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
