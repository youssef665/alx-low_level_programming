#include "main.h"

/**
 * set_bit - a function that sets the value
 * of a bit to 1 at given index
 * @n: pointer to postive integer
 * @index: index of the number to be entered
 *
 * Return: 1 if worked or -1 if an error occured
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
