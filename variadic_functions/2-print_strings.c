#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - the function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *Sam;
	unsigned int j;

	va_start(valist, n);
	for (j = 0; j < n; j++)
	{
		Sam = va_arg(valist, char *);
		if (Sam == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", Sam);
		}
		if (separator != NULL && j != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
