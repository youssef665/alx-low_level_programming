#include <stdio.h>

/**
 * _memcpy - a funtion that copy memory area
 * @dest: pointer to  a character argument
 * @src: pointer to a character argument
 * @n: an unsigned integer argument
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	
	return (dest);
}
