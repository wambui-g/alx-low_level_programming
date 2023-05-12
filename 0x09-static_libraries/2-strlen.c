#include "main.h"

/**
 * _strlen- returns length of a string
 * @s: char to consider
 *
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
