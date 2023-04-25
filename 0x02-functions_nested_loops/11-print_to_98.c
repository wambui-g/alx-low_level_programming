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

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else
	{
		for (int i = n; i >= 98; i--)
		{
			_putchar(i + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
