#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: this is the table width (number of columns)
 * @height: this is the table height (number of columns)
 *
 * Return: The function should return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int j, k;

	if (width < 2 || height < 2)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		arr[j] = malloc(sizeof(int) * width);
		if (arr[j] == NULL)
		{
			for (--j; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}
	return (arr);
}
