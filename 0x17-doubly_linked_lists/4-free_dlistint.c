#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_list;

	while (head != NULL)
	{
		new_list = head;
		head = head->next;
		free(new_list);
	}
}
