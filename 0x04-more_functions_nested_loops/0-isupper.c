#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: char type letter
 * Return: 1 if uppercase and 0 is otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') 
		return (1);
	else
		return (0);
}
