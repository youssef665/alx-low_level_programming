#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: arguments counter
 *@av: arguments vector
 * Return: a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, e;
	char *p = NULL;

	k = 0;
	e = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			e++;
		}
	}

	p = (char *)malloc(e + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
