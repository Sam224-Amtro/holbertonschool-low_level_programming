#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_name - this is the function that prints a name
 *@f: this is pointers to check
 *@name: this is the pointers name
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
