#include "main.h"

/**
 * _abs- computes absolute
 * @n: integer to consider
 *
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
