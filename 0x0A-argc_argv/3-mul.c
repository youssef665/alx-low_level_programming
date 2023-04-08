#include <stdio.h>
#include <stdlib.h>

/**
 * main - an Entry point
 * @argc: is an argument counter
 * @argv: is a pointer to array of strings argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int i, mult = 1;

		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
