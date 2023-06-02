#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list- frees linked list
 * @head: list head
 *
 * Return: null
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}

	free(head);
}
