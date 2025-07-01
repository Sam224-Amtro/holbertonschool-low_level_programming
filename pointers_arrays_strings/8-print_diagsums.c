#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: the pointer check
 * @size: the table and colonne
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k * (size + 1)];
		sum2 += a[(k * size) + (size - 1 - k)];
	}
	printf("%d, %d\n", sum1, sum2);
}
