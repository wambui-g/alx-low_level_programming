#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index- searches for matching values depending on function
 * @array: int pointer
 * @size: no of indexes in array
 * @cmp: function pointer
 *
 * Return: pointer to first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	ptr = cmp;

	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}

	return (-1);
}
