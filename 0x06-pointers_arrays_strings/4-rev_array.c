#include "main.h"

/**
 * reverse_array- reverses the content of an array
 * @a: array of the ints
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
