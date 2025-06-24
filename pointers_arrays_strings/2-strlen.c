#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - that returns the length of a string
 * @s: the pointers in point
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
