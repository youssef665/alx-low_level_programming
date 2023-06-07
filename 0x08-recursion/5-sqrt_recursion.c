#include "main."

/**
 * number - a function that get the square root
 * @x: first integer argument
 * @y: second integer argument
 *
 * Return: an integer
 */

int number(int x, int y)
{
	if (y * y > x)
		return (-1);
	else if (y * y == x)
		return (y);

		number(x, y + 1);
}

/**
 * _sqrt_recursion - a fumction that get squar root
 * @n: an integer number
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (number(n, 1));
}
