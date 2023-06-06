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
	listint_t *new, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (-1);
	}
	prev = *head;
	for (l = 0; l < index - 1; l++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	new = prev->next;
	prev->next = new->next;
	free(new);
	return (1);
}
