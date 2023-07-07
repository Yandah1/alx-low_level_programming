#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks whether the passed character is an uppercase or not.
 * @c: character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
