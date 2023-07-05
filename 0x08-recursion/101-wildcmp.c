#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string, which can contain the special character *
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return ((wildcmp(s1, s2 + 1)) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
