#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - that checks for a digit (0 through 9)
 * @c: The charaters checks
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
