#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard -  that prints the chessboard
 * @a: the pointer to check
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int k, j;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[k][j]);
		}
		putchar('\n');
	}
}
