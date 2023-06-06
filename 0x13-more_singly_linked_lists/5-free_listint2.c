#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2- frees list
 * @head: list head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	return (void);
}
