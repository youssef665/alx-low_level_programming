#include "main.h"

/**
 * wildcmp - compares two strings and find if there are
 * identical or not
 * @a: a pointer to string
 * @b: second pointer to string
 *
 * Return: an integer
 */
int wildcmp(char *a, char *b)
{
	if (*a == '\0' && *b == '\0')
		return (1);

	if (*a == *b)
		return (wildcmp(a + 1, b + 1));

	if (*b == '*')
	{
		if (*b == '*' && *(b + 1) != '\0' && *b == '\0')
			return (0);
		if (wildcmp(a, b + 1) || wildcmp(a + 1, b))
			return (1);
	}

	return (0);
}
