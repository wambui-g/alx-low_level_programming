#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid- frees a 2d array
 * @grid: array
 * @height: height of array
 *
 * Return: void
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow- splits a string into words
 * @str: string to consider
 *
 * Return: pointer of array
 */
char **strtow(char *str)
{
	char **n;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	n = malloc((height + 1) * sizeof(char *));

	if (n == NULL || height == 0)
	{
		free(n);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				n[i] = malloc((c - a1 + 2) * sizeof(char));
				if (n[i] == NULL)
				{
					ch_free_grid(n, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			n[i][j] = '\0';
	}
	n[i] = NULL;
	return (n);
}
