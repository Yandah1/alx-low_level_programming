#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @str: the string
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
	int i = (*s >= 'a' && *s <= 'z') ? 'a' : (*s >= 'A' && *s <= 'Z') ? 'A' : 0;

	if (i != 0)
	{
	int j = (*s - i + 13) % 26;

	*s = i + j;
	}
		s++;
	}
	return (str);
}
