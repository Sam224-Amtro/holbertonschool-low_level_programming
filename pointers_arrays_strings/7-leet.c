#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *leet - this is Entry function
 * @str: the pouinters check
 *
 * Return: Always 0
 */
char *leet(char *str)
{
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int j;
	int k;

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; letter[k] != '\0'; k++)
		{
			if (str[j] == letter[k])
			{
				str[j] = num[k];
				break;
			}
		}
	}
	return (str);
}
