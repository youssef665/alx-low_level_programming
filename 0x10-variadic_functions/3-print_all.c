#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int l = 0, i = 0;
	char *s = ", ";
	char *str;

	va_start(p format);

	while (format && format[i])
		i++;

	while (format && format[l])
	{
		if (l  == (i - 1))
		{
			s = "";
		}
		switch (format[l])
		{
		case 'c':
			printf("%c%s", va_arg(p, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(p, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(p, double), s);
			break;
		case 's':
			str = va_arg(p, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, s);
			break;
		}
		l++;
	}

	printf("\n");
	va_end(p);
}
