#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - that returns the value of x raised to the power of y
 * @x: the raised to the power of y
 * @y: is lower than 0
 *
 * Return: the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
