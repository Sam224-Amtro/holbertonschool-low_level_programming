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
	int index;
	int count;

	for (index = 0; dest[index] != '\0'; index++)
	{
		;
	}
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < 0)
	{
	}	
	return (dest);
}
