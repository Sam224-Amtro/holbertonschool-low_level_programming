#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule la première lettre de chaque mot
 * @str: Chaîne de caractères à modifier
 *
 * Return: La chaîne modifiée
 */
char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
}

return (str);
}
