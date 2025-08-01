#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Data to insert in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp_node && count < idx - 1)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == idx - 1 && temp_node)
	{
		if (temp_node->next == NULL)
			return (add_dnodeint_end(h, n));

		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = temp_node->next;
		new_node->prev = temp_node;

		if (temp_node->next)
			temp_node->next->prev = new_node;
		temp_node->next = new_node;

		return (new_node);
	}

	return (NULL);
}
