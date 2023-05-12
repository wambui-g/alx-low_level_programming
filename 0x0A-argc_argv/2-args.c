#include <stdio.h>

/**
 * main- prints all arguements it receives
 * @argc:
 * @argv:
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[argv]);

	return (0);
}
