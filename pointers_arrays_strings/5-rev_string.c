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
	int len = 0;
	int k = strlen(s) - 1;
	char p;

	while (len < k)
	{
		p = s[len];
		s[len] = s[k];
		s[k] = p;

		len++;
		k--;
	}
}
