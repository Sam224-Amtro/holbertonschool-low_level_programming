#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
#include "main.h"
#include <string.h>

/**
 * print_list - that prints all the elements of a list_t list
 * @h: The pointers to check
 *
 * Description: singly linked list node structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
