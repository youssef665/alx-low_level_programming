#include "main.h"

/**
 * flip_bits - a function that returns the
 * number of bits you would need to flip
 * @n: integer value
 * @m: second integer value
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int f = 0, c1, c2;

	while (!(n == 0 && m == 0))
	{
		c1 = n & 1;
		c2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (c1 != c2)
			f += 1;
	}
	return (f);
}
