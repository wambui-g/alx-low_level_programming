#include "main.h"
#include <stdio.h>

/**
 * more_numbers- numbers 10 times
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
