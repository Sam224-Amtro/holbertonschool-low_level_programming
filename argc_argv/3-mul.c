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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
