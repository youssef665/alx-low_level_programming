#include "main.h"

/**
 * _pow_recursion - a function that calcuater the power
 * @x: frist integer argument
 * @y: second integer argument
 *
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)

		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

