#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - that returns the number of elements in a linked list_t list
 * @h: Pointer to the list_t list
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
