#include "main.h"
#include <stdio.h>

/**
 * *cap_string- capitalizes words
 * @c: char to consider
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i = 0, a = 0, cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (c[a] != '\0')
	{
		while (i < cspc)
		{
			if ((a == 0 || c[a - 1] == spc[i]) && (c[a] >= 97 && c[a] <= 122))
				c[a] -= 32;
			i++;
		}
		a++;
	}
	return (c);
}
