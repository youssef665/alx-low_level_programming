#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer to a character argument
 * @c: a character argument
 *
 * Return: pointer of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
