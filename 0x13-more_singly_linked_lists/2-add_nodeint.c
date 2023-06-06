#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint- adds new node to the beginning of list
 * @head: node head
 * @n: value to add to new int
 *
 * Return: add of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}

	return (NULL);
}
