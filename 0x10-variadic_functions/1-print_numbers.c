#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if (separator == NULL || *separator == 0)

			continue;
		else
		{

		if (i == n - 1)
			continue;

		else
			printf("%c ", *separator);
		}
	}
			printf("\n");


	va_end(p);
}
