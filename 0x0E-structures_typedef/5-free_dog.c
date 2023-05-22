#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- frees assigned memory space
 * @d: of type dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
