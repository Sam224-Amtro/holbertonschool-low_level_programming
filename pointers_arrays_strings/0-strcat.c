#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcat - that concatenates two strings
 * @src: The first parameter
 * @dest: The second parameter
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int j;

	for (k = 0; dest[k] != '\0'; k++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[k] = src[j];
		k++;
	}
	return (dest);
}
