#include <stdio.h>

/**
 *  squareroot - funtion that checks the square root of whole number
 *  @a: an integer argument
 *  @b: an integer argument
 *
 * Return: integer
 */

int squareroot(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (squareroot(a, b + 1));
}
/**
 *  _sqrt_recursion - funtion that return the square root of whole number
 *  @n: an integer argument
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
