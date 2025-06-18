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
	char letter;

	for (Num = 0; Num < 10; Num++)
	{
		putchar((Num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'k'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
