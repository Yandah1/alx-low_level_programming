#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 * @n: the number of byte to copy
 * @src: the pointer to the memory location
 * @dest: is the pointer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;
        char *dest_s = dest;

        for (i = 0; i < n; i++)
        {
                *dest++ = *src++;
        }
        return (dest_s);
}
