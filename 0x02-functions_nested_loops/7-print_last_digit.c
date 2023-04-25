#include "main.h"

/**
 * print_last_digit- prints last num
 * @n: int to consider
 *
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
		l = l * -1;

	_putchar(l + '0');

	return (l);
}
