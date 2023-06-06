#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint- returns sum of data in list
 * @head: list head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
