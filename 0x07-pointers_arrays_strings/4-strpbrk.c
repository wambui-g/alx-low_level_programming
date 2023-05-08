#include "main.h"

/**
 * _strpbrk- searches for a string for any set of bytes
 * @s: string to consider
 * @accept: char to accept
 *
 * Return: s that matches accept or Null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
