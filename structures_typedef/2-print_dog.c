#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: Pointer on the DOG structure to initialize
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Name : %s\n", d->name);
	printf("Age : %.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Owner : %s\n", d->owner);
}
