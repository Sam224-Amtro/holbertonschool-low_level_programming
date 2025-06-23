#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - FizzBuzz test de 1 à 100.
 *
 * Affiche les nombres de 1 à 100 :
 * - "Fizz" pour les multiples de 3
 * - "Buzz" pour les multiples de 5
 * - "FizzBuzz" pour les multiples de 3 et 5
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num != 100)
		{
			printf("Buzz ");
		}
		else if (num == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
