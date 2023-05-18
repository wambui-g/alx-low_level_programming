#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked- allocates memory
 * @b: memory size to allocate
 *
 * Return: null
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98); /* check exit status for null */
	return (p);
}
