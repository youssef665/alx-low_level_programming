#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a funtion that sum the parameters
 * @n: first argument
 * @...: the number of arguments that you will pass
 *
 * Return: the sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	int sum = 0;

	va_start(s, n);
	if (n == 0)
		return (0);
	else
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(s, int);
	}
	va_end(s);

	return (sum);
	}
}
