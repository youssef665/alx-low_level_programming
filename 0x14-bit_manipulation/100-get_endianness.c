#include "main.h"

/**
 * get_endianness - a function that check endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int z = 1;
	char *y = (char *) &z;

	return ((int)*y);
}
