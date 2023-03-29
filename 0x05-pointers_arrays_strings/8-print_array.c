#include <stdio.h>

/**
 * print_array - a function that prints n elements array
 * @a: integer pointer
 * @n: integer argument
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
