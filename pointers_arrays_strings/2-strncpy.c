#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strncpy -  that copies a string
 * @dest: A pointer to the string to be copied to
 * @src: A pointer to the string being copied
 * @n: The number of characters to be copied
 *
 * Return: A pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	if (n < 0)
		printf("\n");
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
