#include "main.h"

/**
 * _strstr- locates substring
 * @haystack: to find from
 * @needle: substring to find
 *
 * Return: to beginning of string or null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
