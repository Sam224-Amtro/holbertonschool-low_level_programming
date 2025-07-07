#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, k;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (k = 0; k < len2; k++)
	{
		concat_str[i + k] = s2[k];
	}
	concat_str[i + k] = '\0';

	return (concat_str);
}
