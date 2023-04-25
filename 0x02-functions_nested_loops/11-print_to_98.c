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
			_putchar(i + '0');
			_putchar(',');
		}
	}

	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			_putchar(j + '0');
			_putchar(',');
		}
	}

	else
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
