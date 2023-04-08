#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: an integer argument
 * @argv: a pointer to an array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("0\n");
	}
	
	else
	{
		int i, sum = 0, var;
		char c;

		for (i = 1; i < argc; i++)
		{
			var = atoi(argv[i]);
			c = argv [i];

			if ( var < 0)
			{
				continue;
			}
			if (  > 9)
			{
				printf("Error");
				break;
			}
				
			else
			{
				sum += var;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

