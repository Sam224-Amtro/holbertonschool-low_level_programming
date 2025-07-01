#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strspn - that gets the length of a prefix substring
 * @s: is the main string whose prefix you wish to evaluate
 * @accept: is a string containing the characters
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int k, j;
	int count = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[k] == accept[j])
				count++;
			}
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
