#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - that executes a function given as a parameter on each
 * element of an array
 * @size: this is the size of the array
 * @action: this is a pointer to the function you need to use
 * @array: the pointers to check
 *
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
