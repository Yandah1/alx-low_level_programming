#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog info
 * @name: Firest member
 * @age: Second member
 * @owner: Third member.
 * Description: Longer description
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * int_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: Firest member
 * @age: Second member
 * @owner: Third member.
 */

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

