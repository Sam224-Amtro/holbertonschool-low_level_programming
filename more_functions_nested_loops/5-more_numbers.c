#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');

				_putchar(b % 10 + '0');
			}
			else
			{
				_putchar(b + '0');
			}
		}
		_putchar('\n');

	}
}
