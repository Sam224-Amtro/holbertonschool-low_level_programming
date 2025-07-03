#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: this is argument
 * @argv: the table to character
 *
 * Return: Always error, success 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int k, num;
	char *endptr;

	for (k = 1; k < argc; k++)
	{
		num = strtol(argv[k], &endptr, 10);
		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
