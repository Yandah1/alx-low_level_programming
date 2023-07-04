#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: a pointer to a pointer to char
 * @to: a pointer to char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
