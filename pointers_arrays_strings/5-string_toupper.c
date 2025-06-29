#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_toupper - that changes all lowercase letters of a string to uppercas
 * @s: analized string
 *
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			s[k] = s[k] - 32;
		}
	}
	return (s);
}
