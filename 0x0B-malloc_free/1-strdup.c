#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a copy of string pointer
 * @str: a pointer to a string
 *
 * Return: copy of a string
 */

char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
