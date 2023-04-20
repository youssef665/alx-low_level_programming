#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator:  a separator between strings
 * @n: a postive integer
 * @...: the number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char c;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, char *));

		if (separator == NULL)
		{
			continue;
		}
		if (i == n - 1)
		{
			continue;
		}

		for (c = 0; *(separator + c) != '\0'; c++)
		{
			putchar(*(separator + c));
		}
	}
	putchar('\n');

	va_end(p);
}
