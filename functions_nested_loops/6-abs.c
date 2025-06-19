#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: The number to variable
 *
 * Return: if n > 0, return n and else return -n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
