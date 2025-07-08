#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range -  that creates an array of integers
 * @max: this is the value maximale
 * @min: this is the value minimale
 *
 * Return: the pointer to checked
 */
int *array_range(int min, int max)
{
	int j, k;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	k = max - min + 1;
	p = malloc(sizeof(int) * k);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < k; j++)
	{
		p[j] = min + j;
	}
	return (p);
}
