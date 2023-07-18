#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	int i, j, k;
	char *n, *o;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);

	if (n == NULL)
	{
		free(doge);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	doge->name = n;
	doge->age = age;
	doge->owner = o;

	return (doge);
}
