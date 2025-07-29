#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - that frees a list_t list
 * @head: pointer to the list_t lis
 *
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
		temp = NULL;
	}
}
