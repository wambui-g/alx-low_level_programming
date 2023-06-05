#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len- returns number of elements in a list
 * @h: head
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
