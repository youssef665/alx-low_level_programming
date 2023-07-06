#include "main.h"

/**
 * get_endianness - a function the checks
 * the endianness
 *
 * Return: integer
 */

int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return ((int)*c);
}
