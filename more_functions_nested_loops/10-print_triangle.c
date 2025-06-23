#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - that prints a triangle, followed by a new line
 * @size: is the size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int c, i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 1; c <= size; c++)
	{
		for (i = 0; i < size - c; i++)
			_putchar(' ');
		for (j = 0; j < c; j++)
			_putchar('#');
		_putchar('\n');
	}
}
