#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end- adds node to end of list
 * @head: list head
 * @n: int to add
 *
 * Return: add of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
