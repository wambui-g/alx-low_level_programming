#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings- prints strings
 * @separator: string to be printed between the strings
 * @n: no of stings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(ap, char *);

		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	putchar('\n');
	va_end(ap);
}
