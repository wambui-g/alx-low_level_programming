#include "main.h"

/**
 * _strcpy-copies string
 * @dest: destination
 * @src: source
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest_start);
}
