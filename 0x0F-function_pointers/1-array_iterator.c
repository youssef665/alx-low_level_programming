#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function
 * given as parameter on each element of the array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function we will use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
