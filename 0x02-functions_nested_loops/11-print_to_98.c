#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints to 98
 * @n: int to consider
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}

	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (i == 98)
			{
				printf("%d", j);
			}
			else
			{
				printf("%d, ", j);
			}
	}

	else
	{
		printf("%d", n);
	}

	printf("\n");
}
