#include "main.h"

/**
 * _pow_recursion- prints power
 * @x: int to consider
 * @y: power
 *
 * Return: power or -1 if y<0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
