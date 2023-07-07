#include "main.h"
#include <stdio.h>
/**
 *_isalpha - checks for alphabetic characters on the program
 *@c: The character in ASCII code
 *Return: 1 for alphabetic characters or  o otherwise
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
