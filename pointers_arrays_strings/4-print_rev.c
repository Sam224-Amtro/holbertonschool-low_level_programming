#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_rev -  that prints a string, in reverse, followed by a new line.
 *@s: this is pointers
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int h;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (h = len; h > 0; h--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
