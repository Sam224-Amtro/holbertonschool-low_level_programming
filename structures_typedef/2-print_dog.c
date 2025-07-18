#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d: the struct to print
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
