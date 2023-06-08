#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: points to a string of 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int val = 0;

	if (b == 0)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}
	return (val);
}
