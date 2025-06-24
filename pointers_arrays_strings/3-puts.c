#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _puts - that prints a string, followed by a new line, to stdout
 *@str: this is pointers
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
