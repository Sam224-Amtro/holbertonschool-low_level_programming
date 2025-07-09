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
	dog_t *newdog;
	int i, j, k;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
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
	newdog->name = malloc(i * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(newdog->name + k) = *(name + i);
	}
	newdog->age = age;
	newdog->owner = malloc(j * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		*(newdog->owner + k) = *(owner + k);
	}
	return (newdog);
}
