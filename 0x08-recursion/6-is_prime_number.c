#include "main.h"

/**
 * p - find prime number
 * @x: an integer number
 * @y: second integer number
 *
 * Return: integer number
 */
int p(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (p(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer number
 *
 * Return: integer number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (p(n, 2));
}
