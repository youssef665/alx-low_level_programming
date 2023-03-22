#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of the number
 * @l: Only Operand
 *
 * Return: the last digit of a number
 */

int print_last_digit(int l)
{
	int k = l % 10;
	
	if (k < 0)
	{
		k = (k * -1);
	}

	_putchar(k + '0');
	
	return (k);
}
