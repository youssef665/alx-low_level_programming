#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* C program that display the alphapet in lower and uppercaase */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
	{

		putchar(i);
	}
		putchar('\n');

	return (0);



}
