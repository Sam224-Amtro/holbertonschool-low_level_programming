#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - that creates a new dog
 * @name: this is the string from name
 * @age: this is the string from age
 * @owner: this is the string from owner
 *
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j, k;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(name + i); i++)
		;
	i++;
	for (j = 0; *(owner + j); j++)
	{
		;
	}
	j++;
	newDog->name = malloc(i * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(newDog->name + k) = *(name + i);
	}
	newDog->age = age;
	newDog->owner = malloc(j * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		*(newDog->owner + k) = *(owner + k);
	}
	return (newDog);
}
