#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_memcpy - that copies memory area
 * @n: the bystes from memory area
 * @src: the source buffer
 * @dest: the destimation buffer
 *
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		src[k] = dest[k];
		return (dest);
	}
}
