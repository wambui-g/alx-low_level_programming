#include "main.h"
/**
 * is _prime- checks if prime
 * @n: number to consider
 * @i: divisor
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime(n, i - 1));
}

/**
 * is_prime_number- returns 1 if prime, 0 otherwise
 * @n: int to consider
 *
 * Return: 1 for prime 0 for not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
