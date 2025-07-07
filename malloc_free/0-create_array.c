#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - that creates an array of chars, and initializes
 * it with a specific char
 * @size: this is name variable
 * @c: this is the strict
 *
 * Return: A return NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
