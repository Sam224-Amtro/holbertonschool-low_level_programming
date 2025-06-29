#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcmp - that compares two strings
 * @s1: The first pointers
 * @s2: The second pointers
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 !=  *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}
