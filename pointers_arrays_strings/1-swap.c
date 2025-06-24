#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * swap_int -  that swaps the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
