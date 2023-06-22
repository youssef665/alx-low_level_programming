#include "variadic_functions.h"
#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * print_strings - function that prints strings
 * followed by a new line
 * @separator: is the string to be printed betweeen strings
 * @n: number of strings to be printed
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(p, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

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
