#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that computes the absolute value of integers
 *@z: Frist operand
 *
 * Return: always postive integer
 */

int _abs(int z)
{

	if (z < 0)

		return (z * -1);
	else
		return (z);
}
