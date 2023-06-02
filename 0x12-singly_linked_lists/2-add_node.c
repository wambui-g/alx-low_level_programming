#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node- adds a node at the begining of the list
 * @head: node head
 * @str: needs to be duplicated
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = length;
		new->next = (*head);
		(*head) = new;
		return (new);
	}

	return (0);
}
