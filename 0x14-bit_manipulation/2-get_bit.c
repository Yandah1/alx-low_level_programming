#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search for
 * @index: the index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
