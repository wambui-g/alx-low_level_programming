#include "main.h"

/**
 * _puts-prints to stdout
 * @str: string to consider
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
