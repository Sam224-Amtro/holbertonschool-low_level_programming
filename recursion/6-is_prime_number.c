#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * is_prime - hat returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n is number
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - hat returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to check
 * @i: iterator
 *
 * Return: Always 0 and 1
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));

}
