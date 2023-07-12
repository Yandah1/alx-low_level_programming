#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac:integer
 * @av: double pointer
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}

	str = malloc((n + 1) * sizeof(*str));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[n++] = av[i][j];
		}
		str[n++] = '\n';
	}
	str[n] = '\0';

	return (str);
}
