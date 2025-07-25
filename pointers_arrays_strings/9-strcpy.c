#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * @dest: A buffer to copy the string to src.
 * @src: The source string to copy.
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
