#include <stdio.h>

/**
 * _memset - a function that fill memory with a constant byte
 * @s: pointer to a character
 * @b: character argument
 * @n: integer argument
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
