#include "main.h"
/**
 * _strcpy -function that copies the string
 * @dest: Destination value
 * @src: source value
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        int b;

        for (b = 0; src[b] != '\0'; b++)
        {
                dest[b] = src[b];
        }
        dest[b++] = '\0';
        return (dest);
}
