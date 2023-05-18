#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc- reallocates memory block using malloc and free
 * @ptr: pointer to prev memory
 * @old_size: initial memory
 * @new_size: reallocated
 *
 * Return: Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int i;

	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		n = malloc(new_size);
		if (n == NULL)
			return (n);
		for (i = 0; i < old_size; i++)
			n[i] = *((char *) ptr + 1);
		free(ptr);
	}
	return (n);
}
