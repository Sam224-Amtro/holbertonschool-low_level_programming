#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - that adds a new node at the beginning of a list_t list
 * @str: the needs to be duplicated
 * @head: this is the double pointers to checks
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	char *new_str;

	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
