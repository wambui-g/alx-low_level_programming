#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc- allocates memory for an array using malloc
 * @nmemb: no of elements
 * @size: size of element of array
 *
 * Return: pointer to memory allocated or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
