#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - that initialize a variable of type struct dog
 * @name: this is for character char
 * @age: this is for character float
 * @owner: this is for character char
 * @d: Pointer on the DOG structure to initialize
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
