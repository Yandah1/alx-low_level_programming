#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the pointer to the string.
 * @accept:the pointer to the string ofcharecter
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int check, i, j;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	num = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] != accept[j])
		{
			check++;
			num = 1;
			break;
		}
	}
	if (num == 0)
	{
		return (check);
	}
	}
	return (check);
}
