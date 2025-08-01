#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the node at index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node = head;
	unsigned int count = 0;

	while (temp_node != NULL)
	{
		if (count == index)
		{
			return (temp_node);
		}
		temp_node = temp_node->next;
		count++;
	}
	return (NULL);
}
