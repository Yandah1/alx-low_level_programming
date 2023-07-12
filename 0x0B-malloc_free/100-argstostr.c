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
	int i, j, n = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)

			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)

		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str[n++] = av[i][j];
		n++;
	}
	if (str[n] == '\0')
	{
		str[n++] = '\n';
	}

	return (str);
}
