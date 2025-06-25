#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - that copies the string pointed to by src
 * @src: this is first pointers
 * @dest: this is second pointers
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
