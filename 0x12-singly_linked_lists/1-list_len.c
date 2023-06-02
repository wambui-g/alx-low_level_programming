#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len- returns number of elemts in list
 * @h: list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
