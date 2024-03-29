#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - checks no of elements in list
 * @h: list head
 *
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
