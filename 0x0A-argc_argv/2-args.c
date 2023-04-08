#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer counter for argument
 * @argv: a pointer to array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
