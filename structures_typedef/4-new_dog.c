#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to name string
 * @age: Dog's age
 * @owner: Pointer to owner's name string
 *
 * Return: Pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j, k;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	i++;
	newDog->name = malloc(i * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		newDog->name[k] = name[k];

	for (j = 0; owner[j]; j++)
		;
	j++;
	newDog->owner = malloc(j * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		newDog->owner[k] = owner[k];

	newDog->age = age;

	return (newDog);
}
