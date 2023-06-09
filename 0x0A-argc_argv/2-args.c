#include "main.h"
#include <stdio.h>

/**
 * main - an entry point
 * @argc: an argument counter
 * @argv: a pointer to an array of strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
