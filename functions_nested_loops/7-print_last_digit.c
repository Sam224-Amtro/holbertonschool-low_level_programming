#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - that prints the last digit of a number
 * @n: The number check
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
	{
		digiit = digit * -1;
	}
	-putchar(digit + '0');
	return (digit);
}
