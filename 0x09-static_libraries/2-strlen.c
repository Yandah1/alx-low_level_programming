#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: Thestring to calculate the length
 * Return: length
 */
int _strlen(char *s)
{
        int length = 0;

        if (*s == '\0')
                return (0);
        do {
                length++;
                s++;
        } while (*s != '\0');
        return (length);
}
