#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', upper = 'A';

	while (c <= 'z')
	{
		putchar(c);
	}

	while (upper <= 'Z')
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
