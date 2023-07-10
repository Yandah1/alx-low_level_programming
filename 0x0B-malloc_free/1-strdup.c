#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a newly allocated space in memory,
 * @str: charactor
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *strr;
	int i, j;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	strr = malloc(sizeof(char) * (j + 1));

	if (strr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		strr[i] = str[i];

	return (strr);
}
