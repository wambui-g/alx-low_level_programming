#include "main.h"
#include <stdlib.h>

/**
 * *_strdup- returns a pointer to a new string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *n;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	n = (chr *)malloc(sizeof(char) * (i + 1));

	if (n == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		n[j] = str[j];

	return (n);
}
