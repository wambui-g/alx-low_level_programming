#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range- creates an array
 * @min: minimum
 * @max: max
 *
 * Return: pointer to created array or null
 */
int *array_range(int min, int max)
{
	int i;
	int *p;
	int range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);

	p = malloc(sizeof(int) * range);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
