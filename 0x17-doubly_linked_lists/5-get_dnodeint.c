#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: list head
 * @index: index to consider
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == check)
			return (head);
		check++;
		head = head->next;
	}
	return (NULL);
}
