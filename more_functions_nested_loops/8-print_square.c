#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_square - that prints a square, followed by a new line
 *@size:  is the size of the square
 *
 * Return: always 0
 */
void print_square(int size)
{
	int g, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (g = 0; g < size; g++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
