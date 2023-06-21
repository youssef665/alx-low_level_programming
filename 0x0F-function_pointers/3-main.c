#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - an entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, answer;
	int (*val)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	val = get_op_func(op);
	answer = val(n1, n2);

	printf("%d\n", answer);
	return (0);
}
