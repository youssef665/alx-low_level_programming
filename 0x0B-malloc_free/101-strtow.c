#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 *@str: pointer to sring argument
 *@av: argument vecotr
 * Return: a pointer to a  string
 */
char **strtow(char *str)
{
	int i, w, j, k, count, m, wf;
	char **p, *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (wf = 0; str[wf] && j <= w; wf++)
	{
		count = 0;
		if (str[wf] != ' ')
		{
			for (i = wf ; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
				count++;
			}
			*(p + j) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + j) == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					x = p[k];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; wf < i; wf++)
			{
				p[j][m] = str[wf];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
