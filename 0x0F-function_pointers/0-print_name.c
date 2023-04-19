#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function to print a name
 * @name: the name that you want to print
 * @f: function that takes the name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
