#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: poinnt to input string
 * Return: Return poinnt to capitalised string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = "\t\n,;.!\"(){}";

	i = 1;
	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] > 96 &&  s[i] < 123))
				s[i] -= 32;
		i++;
	}
	return (s);
}
