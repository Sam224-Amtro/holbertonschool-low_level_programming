#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - that checks for uppercase character
 * @c: The charater to check
 *
 * Return: Always 1 end 0
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
