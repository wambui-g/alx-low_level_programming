#include "main.h"

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
			printf("%d", i);
			_putchar(',');
		}
	}

	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			_putchar(',');
		}
	}

	else
	{
		printf("%d", n);
	}

	_putchar('\n');
}
