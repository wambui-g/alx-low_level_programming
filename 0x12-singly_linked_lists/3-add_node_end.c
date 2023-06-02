#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node at the end
 * @head: head node
 * @str: string to be duplicated
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new, *temp;

	while (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}

		while (str[length])
			length++;
		new->len = length;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		return (new);
	}

	return (NULL);
}
