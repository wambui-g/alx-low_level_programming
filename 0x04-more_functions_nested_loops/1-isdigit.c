#include "main.h"
#include <stdio.h>

/**
 * _isdigit- checks for digits
 * @c: int to check
 *
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
