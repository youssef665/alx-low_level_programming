#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that return a pointer to a
 * new allocated space in memory which contains copy of the string
 * @str: is a pointer to character argument
 *
 * Return: NULL if str is NULL or insufficient memory
 * on success returns a pointer
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i;
	int j;


	for (j = 0; *(str + j) != '\0'; j++);
	
	str2 = (char *) malloc(j + 1 * sizeof(char));

	if (str == NULL)
		return (NULL);


	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			str2[i] = str[i];
		}

	}
	str2[i] = '\0';

	return (str2);
}

