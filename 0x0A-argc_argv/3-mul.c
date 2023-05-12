#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints product of two numbers
 * @argc: arguement
 * @argv: arguement
 *
 * Return: 0 for two and 1 for not two
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
	}

	return (0);
}
