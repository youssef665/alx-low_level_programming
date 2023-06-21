#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of the searched number (integer)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	 int s;
	 int i;

	if (array == NULL ||  cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		s = cmp(array[i]);
		if (s == 1)

			return (i);

	}
	return (-1);
}
