#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _puts_recursion - that prints a string, followed by a new line
 * @s: The pointers check
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != '\0')
		{
			putchar(s[k]);
		}
	}
	putchar('\n');
}
