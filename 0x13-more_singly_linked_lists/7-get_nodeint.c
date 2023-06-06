#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index- returns nth node
 * @head: list head
 * @index: index of node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head)
	{
		while (head != NULL)
		{
			if (len == index)
				return (head);

			head = head->next;
			len++;
		}
	}
	return (NULL);
}
