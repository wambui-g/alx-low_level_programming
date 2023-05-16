#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid- returns pointer to a 2d array of ints
 * @width: width
 * @height: height
 *
 * Return: returns pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **all;

	if (width <= 0 || height <= 0)
		return (NULL);

	all = malloc(sizeof(int *) * height);

	if (all == NULL)
	{
		free(all);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		all[i] = malloc(sizeof(int) * width);
		if (all[i] == NULL)
		{
			for (; i >= 0; i--)
				free(all[i]);
			free(all);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			all[i][j] = 0;

	return (all);

}
