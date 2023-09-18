#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to be searched,
 * @needle: pointer to the substring to be located in the string.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
	{
		p1++;
		p2++;
	}
	if (*p2 == '\0')
	{
		return (haystack);
	}
		haystack++;
	}
	return (NULL);
}
