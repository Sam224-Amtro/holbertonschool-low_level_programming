#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: The character check
 *
 * Return: 1 = +, 0 = 0, -1 = -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
