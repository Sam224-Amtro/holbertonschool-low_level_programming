#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * puts2 - that prints every other character of a string
 *@str: This is pointers
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			return;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
