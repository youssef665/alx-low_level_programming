#include "main.h"

/**
 * _strlen_recursion - a function that know the lenght of the string
 * @s: a pointer to character
 *
 * Return: an integer
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return 0;
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
