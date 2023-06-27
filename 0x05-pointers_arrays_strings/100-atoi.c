#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to a integer.
 * @s: The string
 * Return: A integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += sign * (s[i] - '0');
			i++;
		}
	else if (result != 0)
	break;
	i++;
	}
	return (result);
}
