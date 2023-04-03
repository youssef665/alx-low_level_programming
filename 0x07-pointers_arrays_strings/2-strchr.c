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
	int i;

	for (i =0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
}
