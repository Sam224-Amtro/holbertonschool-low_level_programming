#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - that draws a diagonal line on the terminal
 * @n: The charaters for numbers
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (j = 0; j < n; j++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}
