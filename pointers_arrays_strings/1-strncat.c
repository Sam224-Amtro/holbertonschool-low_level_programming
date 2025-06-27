#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strncat -  that concatenates two strings
 * @dest: the first parameter
 * @src: the second parameter
 * @n: this is the numbers character
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int j;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len++;
	}
	if (j < 0)
	{
	}
	return (dest);
}
