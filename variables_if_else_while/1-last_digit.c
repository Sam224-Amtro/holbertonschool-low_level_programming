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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("the last digit of %d is %d and is greater 5\n", n, n % 10);
	if ((n % 10) == 0)
		printf("the last digit of %d is %d and is 0\n", n, n % 10);
	if ((n % 10) < 6)
		printf("the last digit of %d is %d and is less than 6 not 0\n", n, n % 10);

	return (0);
}
