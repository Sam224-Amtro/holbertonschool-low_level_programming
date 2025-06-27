#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_array - that prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: this is pointers
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int k;

	if (n <= 0)
		printf("\n");
	for (k = 0; k < n; k++)
	{
		if (k != n - 1)
		{
			printf("%d, ", a[k]);
		}
		else
		{
			printf("%d\n", a[k]);
		}
	}
}
