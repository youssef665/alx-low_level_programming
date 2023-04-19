#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes functions as parameter 
 * @array: an array of intgers
 * @size: size of the array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if(action == NULL)
		return;

	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
