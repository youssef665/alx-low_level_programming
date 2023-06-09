#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 * program to print _putchar
 */

int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(arr[i]);
		i++;
	}

		putchar('\n');

		return (0);
}
