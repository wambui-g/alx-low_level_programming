#include "main.h"
#include <stdio.h>

/**
 *  _isupper- checks for upper case
 *  @c: int to consider
 *
 *  Return: 1 for upper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
