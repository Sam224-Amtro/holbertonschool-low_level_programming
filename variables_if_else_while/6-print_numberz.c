#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 succes
 */
int main(void)
{
	int Num;

	for (Num = 0; Num < 10; Num++)
	{
		putchar((Num % 10) + '0');
	}

	putchar('\n');

	return (0);

}
