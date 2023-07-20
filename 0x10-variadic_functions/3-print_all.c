#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *buf = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", buf, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", buf, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", buf, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", buf, str);
					break;
				default:
					i++;
					continue;
			}
			buf = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}



