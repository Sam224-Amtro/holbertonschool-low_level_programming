#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to src.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int position;

	while (src[position])
	{
		dest[position] = src[position];
		position++;
	}
	return (dest);
}
