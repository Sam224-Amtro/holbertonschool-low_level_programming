#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int i, k, m, x;

	i = m = 0;
	x = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	k = i;
	while ((s[k] >= '0') && (s[k] <= '9'))
	{
		m = (m * 10) + x * ((s[k]) - '0');
		k++;
	}
	return (m);
}
