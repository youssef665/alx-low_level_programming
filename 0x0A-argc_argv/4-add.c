#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - an entry point
 * @argc: an argument counter
 * @argv: a pointer to array of stirngs
 *
 * Return: 1 if there is an error, 0 if there is no error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}



	}
		sum += atoi(argv[i]);


	}
	printf("%d\n", sum);
}
	return (0);
}
