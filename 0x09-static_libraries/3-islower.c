#include "main.h"
/**
 *_islower - checking for lowcases characters on the program
 *@c: Thw character in ASCII code
 *Return: 1 if c is lowercase. o otherwise
 */
int _islower(int c)
{
        if  (c >= 97 && c <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
