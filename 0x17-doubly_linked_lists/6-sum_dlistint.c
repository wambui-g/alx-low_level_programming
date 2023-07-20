#include "lists.h"

/**
 * sum_dlistint- sum list
 * @head: list head
 *
 * Return: sum or 0 if null
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
