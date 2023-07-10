#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a newly allocated space in memory,
 * @str: charactor
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	cha ;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
		new_str[len] = '\0';

	return (new_str);
}
