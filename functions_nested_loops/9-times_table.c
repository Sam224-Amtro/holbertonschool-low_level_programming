#include <stdio.h>
#include "main.h"

/**
 * times_table -  that prints the 9 times table, starting with 0.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("9 * %d = %d\n", i, 9 * i);
	}
	_putchar('\n');
	return;
}
