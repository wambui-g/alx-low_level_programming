#include "main.h"

/**
 * *leet- encodes string into 1337
 * @c: character to consider
 *
 * Return: char
 */
char *leet(char *c)
{
	int i = 0, j = 0, k = 0;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	while (c[i] != '\0')
	{
		while (l[j] != '\0')
		{
			if (c[i] == l[j])
			{
				k = j;
				c[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (c);
}
