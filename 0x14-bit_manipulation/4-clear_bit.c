#include "main.h"

/**
 * clear_bit - a function that sets value
 * of a bit to 0
 * @n: the value
 * @index: the index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	int clear;

	if (index > 63)
		return (-1);
	clear = 1 << index;
	*n = *n & (~clear);
	return (1);
}
