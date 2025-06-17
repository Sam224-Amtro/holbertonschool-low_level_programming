#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positif\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	if (n < 0)
		printf("%d is negatif\n", n);

	return (0);
}
