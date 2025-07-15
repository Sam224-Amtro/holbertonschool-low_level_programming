#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - this a function that searches for an integer
 * @size: is the number of elements in the array array
 * @array: this is the pointer to check
 * @cmp: this is a pointer to the function to be used to compare values
 *
 * Return: -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size >= 0)
	{
		if (array != NULL && cmp != NULL && size > 0)
		{
			for (k = 0; k < size; k++)
			{
				if (cmp(array[k]))
				{
					return (k);
				}
			}
		}
	}
	return (-1);
}
