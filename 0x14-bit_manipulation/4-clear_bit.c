#include "main.h"

/**
 * clear_bit - a function that sets value of bit to 0
 * at given index
 * @n: pointer to postive intger
 * @index: index to be entered
 *
 * Return: 1 if it succeeded ,-1 if an erro occured
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	int remove;

	if (index > 63)
		return (-1);
	remove = 1 << index;
	*n = *n & (~remove);
	return (1);
}
