#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: this is argument
 * @argv: the table to character
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
