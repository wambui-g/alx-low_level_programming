#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- prints all
 * @format: types of arguements
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, start = 0;
	char *p;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(ap, char *);
			if (p)
			{ printf("%s", p);
				break; }
			printf("%p", p);
			break;}
		i++;
	}
	printf("\n");
	va_end(ap);
}
