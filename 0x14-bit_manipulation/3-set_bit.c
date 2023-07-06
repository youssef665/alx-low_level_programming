#include "main.h"

/**
 * set_bit - a function that sets
 * value of bit to 1
 * @n: pointer to value
 * @index: the index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	int new;

	if (index > 63)
		return (-1);
	new = 1 << index;
	*n = *n | new;
	return (1);
}
