#include <stdio.h>
/**
 * _puts - a function that prints a string
 *@str: pointer character argument
 */

void _puts(char *str)
{
	int i= 0;

	while (*(str + i) != 0)
	{
		putchar(*(str + i));
		i++;
	}
}
