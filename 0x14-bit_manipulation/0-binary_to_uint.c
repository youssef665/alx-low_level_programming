#include "main.h"


/**
 * binary_to_uint - a function that converts binary
 * number to unsigned int
 * @b: character pointer to string
 *
 * Return: the converted number or
 * or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			sum <<= 1;
		else if (b[i] == '1')
		{
			sum <<= 1;
			sum += 1;
		}
		else
			return (0);
		if (b == NULL)
			return (0);
	}
	return (sum);
}

