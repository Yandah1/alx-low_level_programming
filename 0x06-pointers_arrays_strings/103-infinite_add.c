#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - function that adds two numbers
 * @n1: number
 * @n2: number to add
 * @r: the buffer
 * @size_r: the buffer size
 * Return: If the result can not be stored in r the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int i, j;
	int result_len;

	if (max_len + 1 > size_r)
	{
		return (0);
	}
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;

		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[max_len--] = sum % 10 + '0';
	}
	result_len = len1 > len2 ? len1 : len2;
	memmove(r, &r[max_len + 1], result_len);

	r[result_len] = '\0';
	return (r);
}
