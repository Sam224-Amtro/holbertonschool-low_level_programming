#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the function that prints the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
