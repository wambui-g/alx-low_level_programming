#include "main.h"

/**
 * _sqrt_recursion- returns sqrt
 * @n: int to consider
 *
 * Return: sqrt or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- calculates sqrt
 * @n: int to consider
 * @i: iterate
 *
 * Return: natural sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
