#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform operation
 * @s: input symbol
 * Return: pointer to function that performs the operation, or NULL on failure
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
