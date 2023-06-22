#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sum all the parameters
 * @n: a constant postive integer
 *
 * Return: the sum of numbers or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;


	va_start(p, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
		return (sum);

		va_end(p);
}

