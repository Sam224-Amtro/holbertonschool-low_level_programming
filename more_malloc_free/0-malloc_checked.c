#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - that allocates memory using malloc
 * @b: this is number from byste
 *
 * Return: a pointer to the allocated memory, Else if return exit status 98
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
			exit(98);
	}
	return (arr);
}
