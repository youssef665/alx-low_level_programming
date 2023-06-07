#include "main.h"

/**
 * p - find plaindrome
 * @x: a string argument
 * @y: integer number
 *
 * Return: integer number.
 */
int p(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	return (p(x + 1, y + 1));
}
/**
 * pcomp - compares two string
 * @a: a string number
 * @b: an integer number
 *
 * Return: integer number.
 */

int pcomp(char *a, int b)
{
	if (*a != *(a + b))
		return (0);
	else if (*a == 0)
		return (1);
	return (pcomp(a + 1, b - 2));
}
/**
 * is_palindrome - find the plaindrome
 * @s: a string number
 *
 * Return: integer number
 */
int is_palindrome(char *s)
{
	int l;

	l = p(s, 0);
	return (pcomp(s, l));
}
