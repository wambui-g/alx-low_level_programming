#include "main.h"

/**
 * *_strchr- locates character in a string
 * @s: string to consider
 * @c: character to locate
 *
 * Return: first c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
