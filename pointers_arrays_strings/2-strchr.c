#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - that locates a character in a string
 * @c: The character chek
 * @s: the string to check
 *
 * Return:  a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	if (s[j] == c)
	{
		return (&s[j]);
	}

	return (0);
}
