#include "main.h"
#include <stdio.h>

/**
 * main - an entry point
 * @argc: argument counter
 * @argv: pointer to array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
