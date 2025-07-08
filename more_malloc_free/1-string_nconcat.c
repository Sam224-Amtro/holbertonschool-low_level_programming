#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - that concatenates two strings
 * @s1: the first string to append
 * @s2: the second string to concatenates
 * @n: the numbers to from byste
 *
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	while (k < (len1 + n))
	{
		if (k <= len1)
			ptr[k] = s1[k];
		if (k >= len1)
			ptr[k] = *s2++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
