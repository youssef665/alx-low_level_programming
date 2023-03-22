#include <stdio.h>
#include "main.h"
/**
 *
 * function to print the alphaet
 */

void print_alphabet(void)
{
	char i = 'a';
	
	while (i < 'z')
	{
		putchar(i);
		i++;
	}
		putchar('\n');


}

int main(void)
{
	print_alphabet();

	return (0);
}
