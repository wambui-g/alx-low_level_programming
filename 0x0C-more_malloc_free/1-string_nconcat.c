#include "main.h"
#include <stdlib.h>

/**
 * _strlen- helper function to calculate length
 * @str: string to consider
 *
 * Return: length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat- concatentates s1 and n of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to consider
 *
 * Return: ptr to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	if (n >= _strlen(s2))
		n = _strlen(s2);
	length = _strlen(s1) + n + 1;
	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
