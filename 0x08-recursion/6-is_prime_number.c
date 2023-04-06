#include <stdio.h>

/**
 * prime - function that check if there is prime number
 * @a: an integer argument
 * @b: an integer arguemnt
 *
 * Return: 1 if prime else return 0
 */

int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

	return (prime(a, b + 1));
}


/**
 * is_prime_number - function that call a fun to check if there is prime number
 * @n: an integer arguemnt
 *
 * Return: 1 if prime else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
