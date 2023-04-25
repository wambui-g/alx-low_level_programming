#include "main.h"

/**
 * _islower -checks for lowercase
 * @c: character
 *
 * Return: 0 if not lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
