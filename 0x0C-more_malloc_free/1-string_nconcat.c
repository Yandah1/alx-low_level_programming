#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to append to
 * @s2: second string
 * @n: integer
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s3;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	new_s3 = malloc(strlen(s1) + n + 1);

	if (new_s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_s3[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		new_s3[i + j] = s2[j];

	new_s3[i + j] = '\0';

	return (new_s3);
}
