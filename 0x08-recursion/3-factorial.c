#include "main.h"

/**
 * factorial- gives factorial of a number
 * @n: the number to consider
 *
 * Return: factorial or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (factorial(n - 1) * n);
}
