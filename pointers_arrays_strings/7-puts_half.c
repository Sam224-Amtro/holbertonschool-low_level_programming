#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * puts_half - that prints half of a string
 * @str: this is pointers
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int k = 0;
	int len = 0;
	int open;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		open = len / 2;
	else
		open = (len - 1) / 2 + 1;

	for (k = open; k < len; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
