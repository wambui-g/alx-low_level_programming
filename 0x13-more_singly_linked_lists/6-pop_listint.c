#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint- deletes head node
 * @head: head node
 *
 * Return: returns head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	n = 0;

	if (*head == NULL)
		return (0);

	while (*head != NULL)
	{
		new = *head;
		*head = new->next;
		n = new->n;
		free(new);
		return (n);
	}

}
