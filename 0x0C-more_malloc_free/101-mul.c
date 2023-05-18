#include <stdlib.h>
#include <stdio.h>

/**
 * multiply- multiply two ints
 * @num1: first int
 * @num2: second int
 *
 * Return: int
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isnum- checks if num
 * @str: string pointer
 *
 * Return: int
 */
int isnum(cost char *str)
{
	while (*str)
	{
		if(!isdigit(*str))
			return 0;
		str++;
	}
	return 1;
}

/**
 * main- entry point
 * @argc: arguement entered
 * @argv: no of arguements
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!isnum(argv[1]) || !isnum(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = multiply(num1, num2);

	printf("%d\n", mul);

	return (0);
}
