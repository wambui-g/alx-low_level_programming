#include <stdio.h>

/**
 * main- prints number of arguments passed
 * @argc:
 * @argv:
 *
 * Return: o
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
