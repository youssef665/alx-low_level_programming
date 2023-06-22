#include "variadic_functions.h"
#include "stdarg.h"
#include "stdlib.h"
#include "stdio.h"

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
