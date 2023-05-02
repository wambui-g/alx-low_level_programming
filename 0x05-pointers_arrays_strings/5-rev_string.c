#include "main.h"

/**
 * rev_string-prints in reverse
 * @s: char to consider
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, l = 0;

	while (s[l] != '\0')
	{
		l++;
		_putchar(s[i]);
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
