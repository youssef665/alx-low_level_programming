#include <stdio.h>

/**
 * _strlen - a function that returns length of a string
 * @s: a character pointer argument
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{

	int i = 0;

	while (*(s + i) != '\0')
	{

	i++;
	}
	return (i);
}
