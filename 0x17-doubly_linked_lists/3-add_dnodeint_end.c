#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of list
 * @head: head node
 * @n: const int
 *
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list = NULL, *tail = *head;

	new_list = malloc(sizeof(dlistint_t));

	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->prev = NULL;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	new_list->prev = tail;
	tail->next = new_list;

	return (new_list);
}
