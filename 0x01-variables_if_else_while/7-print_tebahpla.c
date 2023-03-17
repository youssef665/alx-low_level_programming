#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 *c program that prints the alphapets in reverse order
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');


	return (0);
}
