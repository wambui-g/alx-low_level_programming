#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint- prints all the elemts of a list
 * @h: list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
