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
	int index;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
