#include "3-calc.h"
#include <stdlib.h>


/**
 * get_op_func -  a function to pointer that selects
 * the correct function to perform the operation
 * asked by the user
 * @s: the operation that he asked for
 *
 * Return: pointer to the function correplnd s to the poniter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	 };
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)

		{

			return (ops[i].f);
		}

			i++;

	}
	return (NULL);
}


