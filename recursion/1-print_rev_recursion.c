#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  _print_rev_recursion -  that prints a string in reverse
 * @s: the string to check
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
