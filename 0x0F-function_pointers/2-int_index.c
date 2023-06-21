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
	unsigned int s;
	unsigned int i;

	if (array == NULL ||  cmp == NULL)
		return;
	if (size > 0)
	{

	for (i = 0; i < size; i++)
	{
		s = cmp(array[i]);
		if (s == 1)

			return (i);

	}
		return (-1);
	}
	else
		return (-1);
}
