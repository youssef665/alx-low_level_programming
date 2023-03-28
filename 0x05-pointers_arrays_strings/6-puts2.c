#include <stdio.h>

/**
 * puts2 - a function that prints every other character in a string
 * @str: pointer of characters
 */

void puts2(char *str)
{
	int i = 0;

	while ( *(str + i) != '\0')
	{
		putchar(*(str +i));

		i+=2;
	}
	putchar('\n');
}
