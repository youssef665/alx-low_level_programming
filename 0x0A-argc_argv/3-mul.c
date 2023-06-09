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
		int i;

		for (i = 1; i < argc; i++)
		{
			printf("%d\n", atoi(argv[i]) * atoi(argv[i+1]));
		}
		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
