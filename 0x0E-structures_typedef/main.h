#define MAIN_H
#ifndef DOC_H
#define DOG_H
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
static void int_dog(struct dog *d, char *name, float age, char *owner);


#endif
