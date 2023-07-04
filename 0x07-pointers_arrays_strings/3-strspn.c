#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the pointer to the string.
 * @accept: the pointer to the string ofcharecter
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
