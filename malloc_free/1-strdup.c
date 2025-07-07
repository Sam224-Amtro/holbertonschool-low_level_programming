#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *ptr, *ret;

	if (!str)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
	{
		return (NULL);
	}
	ptr = ret;
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';
	return (ret);
}
