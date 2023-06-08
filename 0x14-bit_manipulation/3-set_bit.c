#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit- sets value of bit to 1 at index
 * @n: int to consider
 * @index: index to consider
 *
 * Return: 1 or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
