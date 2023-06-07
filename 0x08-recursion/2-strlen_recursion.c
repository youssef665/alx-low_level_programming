#include "main.h"

/**
 * _strlen_recursion - a function that know the lenght of the string
 * @s: a pointer to character
 *
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s == '\0')
	{
		return 0;
	}

	else
	{
		_strlen_recursion(s + 1);

		counter++;
	}

	return (counter);
}

