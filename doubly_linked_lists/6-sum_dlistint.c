#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: the pointers check to node
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 * Description: this function traverses the doubly linked list adding the value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
