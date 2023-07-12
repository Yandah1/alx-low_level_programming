#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * count_words - helper function to count the number of words in a string
 * @str: string to count words in.
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;

	while (*str != ' ' && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	int i, words_count, j;
	char **words, *token;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	words_count = count_words(str);

	words = malloc((words_count + 1) * sizeof(*words));
	if (words == NULL)
	{
		return (NULL);
	}
	token = strtok(str, " ");

	while (token != NULL)
	{
	words[i] = malloc(strlen(token) + 1);

	if (words[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(words[j]);
		}
		free(words);
		return (NULL);
	}
	strcpy(words[i], token);
	i++;
	token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
