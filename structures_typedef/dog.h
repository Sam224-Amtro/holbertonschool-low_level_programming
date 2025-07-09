#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - with the following elements
 * @name: this is for character char
 * @age: this is for character float
 * @owner: this is for character char
 * @dog_t: Details of a dog I don't know
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t -typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
