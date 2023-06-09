#include <stdio.h>
#include "main.h"

/**
 *_isalpha - a function that checks if the letter upper and lowercase
 *@c: Frist operand
 *
 * Return: 1 if the number is upper or lowercase else  return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);

		else

		return (0);

}
