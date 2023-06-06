#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index- function that deletes the node at index
 * @head: list head
 * @index: index of node that should be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int l;
	listint_t *next, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	prev = *head;
	for (l = 0; l < index - 1; l++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	next = prev->next;
	prev->next = next->next;
	free(next);
	return (1);
}
