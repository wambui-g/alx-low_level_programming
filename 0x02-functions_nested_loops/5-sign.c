#include "main.h"

/**
 * print_sign- to print number sign
 * @n: int to check
 *
 * Return: 0 (for zero)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else if (n > 0)
	{
		_putchar(43);
		return (+1);
	}

	else
		_putchar(48);
		return (0);
}
