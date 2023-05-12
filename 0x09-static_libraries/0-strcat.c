#include "main.h"

/**
 * *_strcat- concatenates strings
 * @dest: char to consider
 * @src: source character
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}

	*i = '\0';

	return (dest);
}
