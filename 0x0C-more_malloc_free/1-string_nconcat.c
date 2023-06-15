#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: pointer to argument character
  * @s2: second pointer to arguemnt character
  * @n: integer argument
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	st = malloc(sizeof(char) * l + 1);
	if (st == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			st[j] = s1[j];

		if (j >= i)
		{
			st[j] = s2[k];
			k++;
		}
		j++;
	}
	st[j] = '\0';
	return (st);
}
