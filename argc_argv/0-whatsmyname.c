#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: this is the argument
 * @argv: the table to character
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
