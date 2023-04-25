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


	_putchar(l + '48');

	return (l);
}
