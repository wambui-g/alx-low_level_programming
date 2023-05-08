#include "main.h"

/**
 * *_memset- fills memory with a constant byte
 * @s: char pointer
 * @b: char to consider
 * @n: int to consider
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
