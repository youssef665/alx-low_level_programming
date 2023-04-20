#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers + new line
 * @seprator: the seprataor between numbers
 * @n: postive integer
 * @...: number of argument passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char c;

	va_start(p,seprator);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (separator == NULL)
		{
			continue;
		}
		if (i == n-1)
		{
			continue;
		}

		for (c = 0; *(separator + c) != '\0'; c++)
		{
			putchar(*(separator + c));
		}
	}
	
	va_end(p);
}
