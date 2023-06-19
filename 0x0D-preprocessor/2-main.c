#include <stdio.h>

/**
 * main - an Entry point that prints the name
 * of the file it was compiled from
 *
 * Return: Always 0
 */


int main(void)
{
	printf("%S\n", __BASE_FILE__);

	return (0);
}

