#include "function_pointers_h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function for elements int array
 * @array: pointer to an integer
 * @size: size of the array
 * @action: function
 *
 * Return: nothing
 */

 void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
