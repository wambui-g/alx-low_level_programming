#include <stdio.h>

/**
 * main- prints number of arguments passed
 * @argc: arguement
 * @argv: arguement
 *
 * Return: o
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
