#include <unistd.h>
#include "main.h"

/**
 * _putchar- putchar
 * @c: char to consider
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
