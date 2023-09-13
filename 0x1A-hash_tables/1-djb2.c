#include "hash_tables.h"

/**
 * hash_djb2 - function to compute hash of str
 * @str: string
 *
 * Return: value of  hash
 */


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c; /* h * 33 + c */
	}

	return (h);
}
