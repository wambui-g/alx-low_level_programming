#include "main.h"

/**
 * rev_string-prints in reverse
 * @s: char to consider
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i, j;
	char c1, c2;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	j = l - 1;
	i = 0;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		j--;
		i++;
	}
}
