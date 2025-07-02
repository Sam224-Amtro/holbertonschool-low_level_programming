#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - that locates a substring
 * @needle: This is the substring you want to find
 * @haystack: This is the string in which you are searching.
 *
 * Return: the pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	int j;

	if (needle[0] == '\0')
	return (haystack);

	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (haystack[k] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k + j] != needle[j])
				break;
			}
			if (needle[j] == '\0')
			return (&haystack[k]);
		}
	}
	return (NULL);
}
