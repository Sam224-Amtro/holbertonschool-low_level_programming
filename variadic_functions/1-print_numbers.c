#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - the function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;

	va_start(args, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && k < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
