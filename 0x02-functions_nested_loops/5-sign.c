#include <stdio.h>
#include "main.h"

/**
 * print_sign - a funciton that prints the sign of the number
 * @n: Frist Operand
 *
 * Return: 1 if number greater than 0 ,0 if n is zero ,-1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
 
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
