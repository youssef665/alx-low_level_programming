#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a  function that searched for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: function that compares
 *
 * Return: the index of the searched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if(cmp(array[z) != 0)
			
			return (z);
	}
	return (-1);
}
