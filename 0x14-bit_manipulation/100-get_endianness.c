#include "main.h"

/**
 * get_endianness- checks endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *str = (char *) &n;

	return (*str);
}
