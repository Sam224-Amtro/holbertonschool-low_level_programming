#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int alphabet = 0;
	char k;

	while (alphabet < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		alphabet++;
	}
}
