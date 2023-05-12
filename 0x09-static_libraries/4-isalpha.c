#include "main.h"

/**
 * _isalpha- to check if alphabet
 * @c: to check
 *
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	return (0);
}
