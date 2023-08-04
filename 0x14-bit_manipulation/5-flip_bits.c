#include "main.h"

/**
 * flip_bits - a function that returns number of bits you would
 * need to flip
 * @n: postive integer number
 * @m: postive integer number
 *
 * Return: postive integer
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
