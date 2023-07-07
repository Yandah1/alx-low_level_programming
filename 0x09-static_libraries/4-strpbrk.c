#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the pointer to the string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if the substring is not found
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i;

        while (*s != '\0')
        {
                for (i = 0; accept[i] != '\0'; i++)
                {
                        if (*s == accept[i])
                                return (s);
                }
                s++;
        }
        return (0);
}
