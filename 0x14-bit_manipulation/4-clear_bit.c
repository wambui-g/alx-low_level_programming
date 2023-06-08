#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit- sets the value of a bit to 0 at index
 * @n: int to consider
 * @index: index to set value to 0
 *
 * Return: 1 or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
