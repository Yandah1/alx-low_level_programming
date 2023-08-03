#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: pointer to the number that need to be changed.e
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
