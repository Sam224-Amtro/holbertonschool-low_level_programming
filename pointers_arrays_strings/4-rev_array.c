#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - that reverses the content of an array of integers
 * @n: s the number of elements of the array
 * @a: The array of integers to be reversed.
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int len, size;

	for (size = n - 1; size >= n / 2; size--)
	{
		len = a[n - 1 - size];
		a[n - 1 - size] = a[size];
		a[size] = len;
	}
}
