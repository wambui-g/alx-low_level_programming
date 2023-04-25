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
	if (n < 98)
	{
		for (int i = n; i <= 98; i++)
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
		for (int j = n; j >= 98; j--)
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
