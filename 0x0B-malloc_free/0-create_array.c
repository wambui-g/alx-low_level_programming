#include "main.h"
#include <stdlib.h>

/**
 * *create_array- creates arrays of char
 * @size: size of array
 * @c: character to store
 *
 * Return: pointer to the array or null if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
		return (NULL);

	n = malloc(sizeof(char) * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
