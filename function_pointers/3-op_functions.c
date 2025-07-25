#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modifying two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
