#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - that returns the length of a string
 * @s: the string to check
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
