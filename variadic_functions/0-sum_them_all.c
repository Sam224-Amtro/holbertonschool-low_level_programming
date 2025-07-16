#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - the function that returns the sum of all its parameters
 * @n: the number to check
 *
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int k;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
