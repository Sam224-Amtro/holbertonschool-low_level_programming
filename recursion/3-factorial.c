#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * factorial - that returns the factorial of a given number
 * @n: The number to check
 *
 * Return: the -1 to indicate an error
 * Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
