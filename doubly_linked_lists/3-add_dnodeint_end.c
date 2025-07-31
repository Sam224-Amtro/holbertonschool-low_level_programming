#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: the integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 * Description: this function creates a new node and sets its value to n
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
