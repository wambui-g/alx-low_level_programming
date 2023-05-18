#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes c to stdout
 * @c: char to consider
 *
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
