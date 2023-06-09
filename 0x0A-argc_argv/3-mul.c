#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - an entry point
 * @argc: an argument counter
 * @argv: a pointer to array of strings
 *
 * Return: 1 if error generated ,0 if succeeded
 */

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		int i, mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *=atoi(argv[i]);

		}
		printf("%d\n", mul);

	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
