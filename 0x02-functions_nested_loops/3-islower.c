#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that check for lowercase letters
 *@c : First operand
 *
 * Return: 0 if the character is lowercase
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);


}
