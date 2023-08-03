#include "main.h"

/**
 * binary_to_uint - fuction that converts a binary number to unsigned int
 * @b: pointer to stringr
 *
 * Return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
		i++;
	}

	return (result);
}
