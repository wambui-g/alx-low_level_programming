#include "lists.h"

/**
 * insert_dnodeint_at_index - add node to index
 * @h: head of list
 * @idx: index
 * @n: int
 *
 * Return: updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int checker = 0;

	if (h == NULL || nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	nnode->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		nnode = add_dnodeint(h, n);
		return (nnode);
	}
	while (current != NULL)
	{
		if (current->next == NULL && checker == idx - 1)
		{
			nnode = add_dnodeint_end(h, n);
			return (nnode);
		}
		else if ((idx - 1) == checker)
		{
			nnode->next = current->next;
			nnode->prev = current;
			current->next->prev = nnode;
			current->next = nnode;
			return (nnode);
		}
		checker++;
		current = current->next;
	}
	free(nnode);
	return (NULL);
}
