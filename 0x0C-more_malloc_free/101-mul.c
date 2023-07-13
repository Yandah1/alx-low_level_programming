#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * error - prints an error message and exits with a status of 98
 * @msg: the error message to print
 */
void error(char *msg)
{
	printf("%s\n", msg);
	exit(98);
}
/**
 * parse_number - parses a string into an integer
 * @str: the string to parse
 *
 * Return: the integer represented by the string
 */

int parse_number(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		if (!isdigit(*str))
		error("Error: argument is positive integer");

		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

/**
 * multiply - multiplies two positive integers and prints the result
 * @num1_str: the first number as a string
 * @num2_str: the second number as a string
 *
 * If either number is not a positive integer,
 * print an error message and exit with a status of 98.
 */

void multiply(char *num1_str, char *num2_str)
{
	int num1 = parse_number(num1_str);
	int num2 = parse_number(num2_str);
	int result = num1 * num2;

	printf("%d\n", result);
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 *
 * If the number of arguments is incorrect,
 * print an error message and exit with a status of 98.
 */
int main(int argc, char **argv)
{

	if (argc != 3)
		error("Error: wrong number of arguments");

	multiply(argv[1], argv[2]);
	return (0);
}
