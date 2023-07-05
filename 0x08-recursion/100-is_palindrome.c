#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 * @s: the string
 * @i: the starting index of the substring
 * @last: the ending index of the substring
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int last)
{
	if (i >= last)
	{
		return (1);
	}
	if (s[i] != s[last])
	{
		return (0);
	}
	return (is_palindrome_helper(s, i + 1, last - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the stringk
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
