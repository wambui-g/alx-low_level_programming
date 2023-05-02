#include "main.h"

/**
 * puts_half- prints half the string
 * @str: character to consider
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			for (i = l / 2; i < l; i++)
				_putchar(str[i]);
		}
		else
		{
			for (i = (l - 1) / 2 + 1; i < l; i++)
				_putchar(str[i]);
		}
	}
	_putchar('\n');

}
