#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - with the following elements
 * @name: this is for character char
 * @age: this is for character float
 * @owner: this is for character char
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
