#include <stdio.h>
/**
 * puts_half - prints half of string
 * Return: length of string
 * @str: string
 */
void puts_half(char *str)
{
	int c = 0;

	int i;

	while (str[c] != 0)
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		if (c % 2 == 0 && i >= c / 2)
			putchar(str[i]);
		else if (c % 2 != 0 && i >= c - ((c - 1) / 2))
			putchar(str[i]);
	}

	putchar('\n');
}
