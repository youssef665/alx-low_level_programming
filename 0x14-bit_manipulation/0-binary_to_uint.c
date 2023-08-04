#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * an unsigned int
 * @b: pointer to character
 *
 * Return: postive integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		r += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (r);

}
