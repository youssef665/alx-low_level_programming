#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name that will be printed
 * @f: a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	f(name);
	else
		return;
}
