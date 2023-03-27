#include <stdio.h>

/**
 * swap_int - function that swaps the intgers
 * @a: first integer argument
 * @b: second integer argument
 */

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
