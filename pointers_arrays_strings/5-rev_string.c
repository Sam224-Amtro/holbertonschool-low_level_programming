#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rev_string -  that reverses a string
 * @s: this is pointers
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
