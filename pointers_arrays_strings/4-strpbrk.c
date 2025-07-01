#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - that searches a string for any of a set of bytes
 * @s: is the main string whose prefix you wish to evaluate
 * @accept: is a string containing the characters
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] == accept[j])
			{
				return (&s[k]);
			}
		}
	}
	return (NULL);
}
