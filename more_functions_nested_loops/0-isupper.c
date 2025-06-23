#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - that checks for uppercase character
 * @c: the charaters checks
 *
 * Return: Always 0 succes 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
