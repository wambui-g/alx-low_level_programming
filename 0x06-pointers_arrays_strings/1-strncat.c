#include "main.h"

/**
 * *_strncat- concatenates strings
 * @dest: char to consider
 * @src: source character
 * @n: number of bytes
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int j = 0;

	while (*i != '\0')
	{
		i++;
	}

	while (j < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		j++;
	}

	return (dest);
}
