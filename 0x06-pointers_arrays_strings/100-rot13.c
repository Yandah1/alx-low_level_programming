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
	if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
	{
		*s += 13;
	}
	else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
	{
		*s -= 13;
	}
		s++;
	}
	return (str);
}
