#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - an entry point
 * @argc: an argument counter
 * @argv: an argument pointer to array of strings
 *
 * Return: 1 if there is an error , 0 if succeeded
 */

int main(int argc, char *argv[])
{
	int  l, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	l = atoi(argv[1]);
	if (l < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; l >= 0;)
	{
		if (l >= 25)
			l -= 25;

		else if (l >= 10)
			l -= 10;

		else if (l >= 5)
			l -= 5;

		else if (l >= 2)
			l -= 2;

		else if (l >= 1)
			l -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
