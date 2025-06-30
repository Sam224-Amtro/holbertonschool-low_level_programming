#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_memset - that fills memory with a constant byte
 * @n: bytes of the memory area pointed
 * @s: the pointer check
 * @b: the desired to value
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
