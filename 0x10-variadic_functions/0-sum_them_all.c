#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that return the sum of all it parameters'
 * @n: unsigned integer as the first arguments
 *
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list done;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(done, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(done, int);
	}
	va_end(done);

	return (sum);
}
