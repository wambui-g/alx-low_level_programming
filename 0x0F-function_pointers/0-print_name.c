#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *n))
{
	if (name != NULL && f != NULL)
		f(name);
}
