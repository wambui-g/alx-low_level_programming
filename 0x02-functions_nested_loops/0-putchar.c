#include "main.h"

/**
 * main- Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char abc[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(abc[i]);
	}
	_putchar('\n');

	return (0);
}
