#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* program that display all the lowercase letter execept e and q */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{

		if (i == 'q' || i == 'e')
		{

			continue;
		}
			putchar(i);
			putchar('\n');

	}

	return (0);



}
