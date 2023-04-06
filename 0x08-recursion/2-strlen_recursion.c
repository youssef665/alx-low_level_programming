#include <stdio.h>

/**
 *  _strlen_recursion - funtion that returns the lenght of string
 *  @s: a pointer to  a character
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
