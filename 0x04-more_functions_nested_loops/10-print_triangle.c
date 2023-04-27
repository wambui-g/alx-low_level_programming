#include "main.h"
#include <stdio.h>

/**
 * print_triangle- do that
 * @size: int to consider
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(32);
			}

			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
