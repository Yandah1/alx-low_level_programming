#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: int type letter
 * Return: 1 if digit and 0 is otherwise.
 */

int _isdigit(int c)
{
        if (c > 47 && c < 58)
                return (1);
        else
                return (0);
}
