#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit- returns value of a given index
 * @n: int to consider
 * @index: index
 *
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index);
	if (index > 32)
		return (-1);
	return (i & 1);
}
