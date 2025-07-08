#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: this is unsigned int type
 * @size: this is the variable
 *
 * Return: the return to pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (k = 0; k < (nmemb * size); k++)
	{
		p[k] = 0;
	}
	return (p);
}
