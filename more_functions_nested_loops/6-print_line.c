#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_line - that draws a straight line in the terminal
 * @n: The number to integre
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
