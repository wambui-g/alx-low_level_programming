#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node at index
 * @head: list head
 * @index: index to check
 *
 * Return: 1 if pass -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int checker;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;
		free(node);
		return (1);
	}
	for (checker = 0; node != NULL && checker < index - 1; checker++)
		node = node->next;
	if (node == NULL || node->next == NULL)
		return (-1);
	if (node->next->next != NULL)
	{
		node->next = node->next;
		free(node->next->prev);
		node->next->prev = node;
		return (1);
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}
	return (-1);
}
