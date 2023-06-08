#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits- flip to get from one no to another
 * @n: int to consider
 * @m: other int
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, len = 0;

	i = n ^ m;
	while (i != 0)
	{
		if (i & 1)
			len++;

		i >>= 1;
	}
	return (len);
}
