#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a
 * doubly linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if successful, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);

	while (temp_node && count < index)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index)
	{
		if (temp_node->prev)
			temp_node->prev->next = temp_node->next;
		else
			*head = temp_node->next;

		if (temp_node->next)
			temp_node->next->prev = temp_node->prev;

		free(temp_node);
		return (1);
	}
	return (-1);
}
