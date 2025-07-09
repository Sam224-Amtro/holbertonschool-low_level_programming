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
	printf("Name : %s\n", (d->name != NULL) ? d->name : "(NIL)");
	printf("Age : %f\n", d->age);
	printf("Owner : %s\n", (d->owner != NULL) ? d->owner : "(NIL)");
}
