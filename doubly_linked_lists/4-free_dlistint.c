#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -Frees a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: void
 * Description: this function frees all the nodes in the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
