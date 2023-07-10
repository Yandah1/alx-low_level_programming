#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concetenates two strings
 * @s1: the first string to concetenate
 * @s2: the second string to cincetenate
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *catt;
	int i = 0, n = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}

	catt = malloc(sizeof(*catt) * (i + n + 1));

	if (catt == NULL)
		return (NULL);

	i = n = 0;
	while (s1[i] != '\0')
	{
		catt[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		catt[i] = s2[n];
		i++, n++;
	}
	catt[i] = '\0';

	return (catt);
}
